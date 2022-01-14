# Numerics.Native
Numerics operations with IA-64 architecture and SSE/AVX extensions.

## Development requirements

* Any IDE (recommended VisualStudio or VS Code)
* Any C++ compiler running on x64 mode (recommended MSVC MSBuild)
* CMake min. version 3.3

## Build

1. Open Bash/Terminal/PowerShell and go to directory, where Git repo is located.
2. Created new directory inside, for example `mkdir out`, go to this dir.
3. Run `cmake ..`.
4. Build your generated compiler project files created in previously created dir.
If you use GCC/MinGW, you can use `make` command.

The final object is shared library for your current operating system.
