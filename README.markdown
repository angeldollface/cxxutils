# CXX UTILS :heavy_multiplication_x: :hammer:

![CXX UTILS CI](https://github.com/angeldollface/cxxutils/actions/workflows/main.yml/badge.svg)

***A small library containing some utility functions for C++. :heavy_multiplication_x: :hammer:***

## ABOUT :books:

Since every language has a very specific way of doing certain tasks and some of these tasks might shared across different projects, I decided to write a library that contains functions that do these tasks. This repository contains the source code for this library.

## USAGE :hammer:

### In a C++ project

To use this library in your own C++ code, download the header file from the `src` directory and include it in your code in the following way:

```C++
#include "path/to/cxxutils.hpp"
```

You should then have access to the functions in [`src/cxxutils.hpp`](src/cxxutils.hpp). You can also view the example in [`example/main.cpp`](example/main.cpp) to get an idea of how to use the APIs in this library.
When you compile your project, be sure to specify the `includes` flag to the C++ compiler.

### Run the example

To run the example, make sure that you have the following tools installed and available from the command line:

- A C++ compiler
- [Git](https://git-scm.org)
- CMake

Assuming you have these tools available, execute the following commands from a command prompt:

- 1.) Download this repository's source code:

```bash
git clone https://github.com/angeldollface/cxxutils.git
```

- 2.) Change directory into the source directory's root:

```bash
cd cxxutils
```

- 3.) Build the example executable:

```bash
make build
```

- 4.) Run the example executable:

```bash
make run
```

***NOTE***: Some of the CMake rules may not work on Windows because some of the rules use the Bash scripting language.

## CHANGELOG :black_nib:

### Version 0.1.0

- Initial release.
- Upload to GitHub.

## NOTE :scroll:

- *CXX Utils :heavy_multiplication_x: :hammer:* by Alexander Abraham :black_heart: a.k.a. *"Angel Dollface" :dolls: :ribbon:*
- Licensed under the MIT license.