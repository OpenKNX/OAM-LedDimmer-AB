# Helligkeitsauflösung auf festgelegten Abhängigkeiten

**Anforderung:** 0,4-%-Eingaben in ETS, auf die nächste KNX-Stufe runden; absolute Buswerte und Rückmeldungen mit allen 256 Stufen. Die KNX-Bibliothek bleibt unverändert.

**Basis:** Applikation `d5eb674`, LED-Modul `4e63884`. Alle anderen Module verwenden exakt ihre Hashes aus `dependencies.txt`. Die Feature-Branches entstehen direkt aus diesen Ständen. Der frühere HCL-basierte Versuch ist auf `backup/brightness-04-percent-hcl-20261101` gesichert und wird nicht übernommen.

## Umsetzung

- [x] Kleine gemeinsame Umrechnungen: ETS-Schrittindex 0–250 → gerundeter KNX-Rohwert 0–255 → internes Level 0–4095; Rückrichtung ebenfalls gerundet.
- [x] Einzelkanal, TW, RGB, RGBW, RGBTW und Zentralobjekt auf direkte Rohwerte umstellen. Bestehende Rückmelderoutinen mit ihren kumulierten Schwellen und Rate-Limits weiterverwenden; absolute Schwellen in Rohwerteinheiten umrechnen.
- [x] Eigene LED-Parametertypen mit `DisplayFactor=0.4`, `Increment=1` und einem Byte verwenden. Min/Max, Szenen, Frontbedienung und absolute Helligkeitsschwellen umstellen. Relative Prozentfelder beibehalten. Beispiel: 75 % wird als 75,2 % (Index 188) gespeichert.
- [x] Neue Applikations-/Modulversion 0.14 und Dev-Version 3.6 vorsehen. Alte Parameterbytes nicht automatisch übernehmen. Header älter als Modulversion 0.14 beim Kompilieren zurückweisen.
- [x] KO-Nummern, Parameter-Speicherlayouts und übrige Modulversionen aus der Basis beibehalten.

## Prüfung

- [x] Native C++-Tests gegen die tatsächlichen Umrechnungen und die vorhandene Statusroutine: alle 256 Rohwerte, 251 ETS-Schritte, 4096 internen Stufen, Rundungsgrenzen und Statusschwellen.
- [x] Quell- und generierte XML prüfen: ein Byte je Helligkeitsfeld, korrekte Defaults, unveränderte relative Felder, KO-Nummern und Speicheradressen.
- [x] Dev-/Release-Produkte mit dem vorhandenen temporären offiziellen OpenKNXproducer 4.3.7 erzeugen und schema-validieren; installierte Werkzeuge nicht ersetzen.
- [x] Echten Header generieren und vollständigen RP2040-Build ausführen. Unabhängiges Code-Review durchgeführt; die drei gefundenen Bereichsminima ebenfalls auf interne Level umgerechnet und erneut gebaut.

## Ausgangsprüfung

Die unveränderte Release-Applikation auf den festgelegten Abhängigkeiten wurde erfolgreich generiert und gegen KNX Schema 20 validiert. Auch der vollständige Ausgangs-Build war erfolgreich.

## Ergebnis

LED-Modul-Commit `38acc5e` hat genau den vorgesehenen Basiscommit `4e63884` als Elterncommit. Der HCL-Commit gehört nicht zu seiner Historie. `dependencies.txt` verweist für das LED-Modul auf diesen Feature-Commit im Fork `kikakeule/OFM-LedModule`, Branch `feature/brightness-04-percent`; sämtliche übrigen Einträge sind unverändert. Der Modulbranch ist im Fork veröffentlicht und sein Remote-Commit wurde verifiziert.

Die Applikationsversion 0.14 ist bewusst gewählt: Der bestehende Flash-Versionscheck berücksichtigt die Applikationsversion, nicht die Firmware-Revision. Eine reine Änderung auf 0.13.2 würde alte Prozentparameter weiterhin akzeptieren, obwohl sie jetzt als 0,4-%-Schrittindizes interpretiert würden.

Alle 26 Helligkeitsfelder behalten ihre Bytebreite. Der generierte Release-Header unterscheidet sich von der ursprünglichen Datei ausschließlich durch Applikationsversion 13 → 14 und LED-Modulversion 13 → 14. Der getestete vollständige Build ist `pio run -e develop_ABSmartHouse_CV_UP_6CH` und verwendet den Release-Header für die passende Produktdatei 0.14. Die erzeugten ETS-Dateien liegen unter `src/LedDimmerAB.knxprod` (Dev 3.6) und `src/LedDimmerAB-Release.knxprod` (Release 0.14).

Die praktische ETS-Anzeige und Hardware sind durch diese automatisierten Prüfungen nicht bestätigt. Die vorhandene Compilerwarnung in `include/hardware.h:501` besteht bereits in der Basis. Die Veröffentlichung in beiden Forks erfolgt auf ausdrücklichen Nutzerwunsch ausschließlich auf `feature/brightness-04-percent`. Es wurde keine Firmware geflasht und kein Merge in einen Hauptbranch durchgeführt.
