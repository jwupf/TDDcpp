# TDD with C++ training project

## Intended use

* Clone the repository
* create a new branch
    * git checkout -b MyTraining
* start doing TDD ...

## Nice to know

I used vscode to set this up. For me it works perfect if the VisualStudio 2019 Compiler is used and I get some include warnings from the editor if clang is used. This should also work with other editors/ide's that are supported by cmake. How to get a Eclipse/VsStudio project from my CMake ... I do not know yet, but I know it is possible.

### vscode short cuts
To run tests(and compile) in vscode: STRG+F7
To run build in vscode: F7

### git specifics
This project uses git submodules, please read:
https://git-scm.com/book/en/v2/Git-Tools-Submodules

To clone this project you have to use a line like:
* git clone --recurse-submodules https://github.com/...

If a simple git clone was used, then afterwards do:
* git submodule init
* git submodule update