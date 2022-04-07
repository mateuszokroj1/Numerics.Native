# Numerics.Native
Numerics operations with IA-64 architecture and SSE/AVX extensions.

## Development requirements

* MS Visual Studio IDE with MSVC compiler
* MS Windows (minimum Vista 64bit)
* CMake min. version 3.2
* 64bit CPU with SSE/AVX support

## Cloning

Please set `git config --global submodule.recurse true` before you clone this repo.
This setting will make the repository pick up submodules correctly.

## Build

1. Open Bash/Terminal/PowerShell and go to directory, where Git repo is located.
2. Prepare cache files with CMake: `cmake --preset "x64-default"`.
3. Go to `out/build` dir.
4. Build your project: `cmake --build .`.

The final objects are:
* Numerics.Native.dll shared library
* Numerics.Native.h import header
* Numerics_Native_Export.h export header
* Numerics.Native.lib import symbols for linkage to your project

## Test

After build you can go to `out/build` dir and run `ctest .`.
