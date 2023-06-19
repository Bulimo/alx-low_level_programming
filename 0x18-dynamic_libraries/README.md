# 0x18-dynamic_libraries

## Objectives

    . What is a dynamic library, how does it work, how to create one, and how to use it
    . What is the environment variable `$LD_LIBRARY_PATH` and how to use it
    . What are the differences between static and shared libraries
    . Basic usage `nm, ldd, ldconfig`

## Requirements

### C

	. Editors: `vi, vim, emacs`
	. Ubuntu 20.04 LTS and gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    . A `README.md` file, at the root of the folder of the project is mandatory
	. `Betty` style compliant code. It will be checked using `betty-style.pl` and `betty-doc.pl`
	. No global variables
	. No more than 5 functions per file
    . Not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
    . Allowed to use `_putchar`
    . The prototypes of all functions and the prototype of the function `_putchar` should be included in header file called `main.h`
	. All your header files should be include guarded

### Bash

    . Allowed editors: `vi, vim, emacs`
    . All scripts will be tested on Ubuntu 20.04 LTS
    . All files should end with a new line
    . The first line of all files should be exactly `#!/bin/bash`
    . A `README.md` file, at the root of the folder of the project, describing what each script is doing
    . All files must be executable

## Description of files in the repository

	. libdynamic.so - dynamic library containing implemented C functions
    . main.h - header file with prototypes for all the defined function
    . 1-create_dynamic_lib.sh - a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
    . 100-operations.so - a dynamic library that contains C functions to be called from Python.
    . 101-make_me_win.sh - script to run commands on a game server to make
	certein numbers as winning numbers
