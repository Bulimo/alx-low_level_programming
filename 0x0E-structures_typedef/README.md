# 0x0E. C - Structures, typedef

## Objectives

	. what are structures, when, why and how to use them
	. how to use typedef

## Requirements

	. Editors: vi, vim, emacs
	. Ubuntu 20.04 LTS and gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	. Betty style compliant code. It will be checked using betty-style.pl and betty-doc.pl
	. No global variables
	. No more than 5 functions per file
	. The only C standard library functions allowed are printf, malloc, free and exit.

## Description of files in the repository

	1. dog.h : Define a new type struct dog with the following elements:

					. name, type = char *
					. age, type = float
					. owner, type = char *

	2. 1-init_dog.c :  a function that initialize a variable of type struct dog
	3. 2-print_dog.c :  a function that prints a struct dog
	4. dog.h : Define a new type dog_t as a new name for the type struct dog
	5. 
