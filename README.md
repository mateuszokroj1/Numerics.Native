# Numerics.Native
Numerics operations with IA-64 architecture and SSE/AVX extensions.

## Development requirements

* Any IDE (recommended VisualStudio or VS Code)
* Any C++ compiler running on x64 mode (recommended MSVC MSBuild)
* CMake min. version 3.3

## Cloning

Please set `git config --global submodule.recurse true` before you clone this repo.
This setting will make the repository pick up submodules correctly.

## Build

1. Open Bash/Terminal/PowerShell and go to directory, where Git repo is located.
2. Created new *build* directory inside: `mkdir build` and go to this dir `cd build`.
4. Run `cmake ..`.
5. Build your generated compiler project files created in previously created dir.
If you use GCC/MinGW, you can use `make` command.

The final object is a static library compatible with the operating system that built the project.
