# 0x0E. 0x0F-function_pointers

## Objectives

	. what are function pointers and how to use them
	. What does a function pointer exactly hold
	. What does a function pointer point to in the virtual memory

## Requirements

	. Editors: vi, vim, emacs
	. Ubuntu 20.04 LTS and gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	. Betty style compliant code. It will be checked using betty-style.pl and betty-doc.pl
	. No global variables
	. No more than 5 functions per file
	. The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden.
	. You are allowed to use `_putchar`
	. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
	. All your header files should be include guarded

## Description of files in the repository

	1. 0-print_name.c : a function that prints a name.
	2. 1-array_iterator.c : a function that executes a function given as a parameter on each element of an array.
	3. 2-int_index.c : a function that searches for an integer.
	4. 3-main.c : a program that performs simple operations.

			. 3-op_functions.c : contains functions that do calculations
			. 3-get_op_func.c : contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.
			. 3-calc.h : contain all the function prototypes and data structures used by the program

	5. 100-main_opcodes.c :  a program that prints the opcodes of its own main function.

