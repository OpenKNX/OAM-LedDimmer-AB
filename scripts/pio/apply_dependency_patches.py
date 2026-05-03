from pathlib import Path
from shlex import quote

Import("env")

project_dir = Path(env.subst("$PROJECT_DIR"))
pio_env = env.subst("$PIOENV")
libdeps_dir = Path(env.subst("$PROJECT_LIBDEPS_DIR")) / pio_env

bl0942_dir = libdeps_dir / "BL0942"
bl0942_source = bl0942_dir / "src" / "BL0942.cpp"
bl0942_patch = project_dir / "lib" / "OFM-SwitchActuator" / "patches" / "BL0942-case-sensitive-include.patch"

if bl0942_source.exists() and bl0942_patch.exists():
    env.Execute(
        "if grep -q '#include \"bl0942.h\"' {source}; then "
        "patch -p1 -d {target_dir} < {patch_file}; "
        "fi".format(
            source=quote(str(bl0942_source)),
            target_dir=quote(str(bl0942_dir)),
            patch_file=quote(str(bl0942_patch)),
        )
    )
