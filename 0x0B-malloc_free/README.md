The folder contains tasks on dynamic memory allocation. At the end of the tasks, one is supposed to understand difference between automatic and dynamic memory allocation, malloc & free functions and how to use them and how to check for memory leak using valgrind.

Allowed editors: vi, vim, emacs

All files are compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All files should end with a new line

The only C standard library functions allowed are malloc and free. Any use of functions like printf, puts, calloc, realloc etc… is forbidden

The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

Not allowed to use global variables

No more than 5 functions per file

The prototypes of all your functions and the prototype of the function `_putchar` provided should be included in the header file called main.h

You are allowed to use the standard library

The functions in the projects include:

	1. 0-create_array.c :  a function that creates an array of chars, and initializes it with a specific char.
	2. 1-strdup.c : a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
	3. 2-str_concat.c : a function that concatenates two strings.
	4. 3. 3-alloc_grid.c : a function that returns a pointer to a 2 dimensional array of integers.
	5. 4-free_grid.c : a function that frees a 2 dimensional grid previously created by your alloc_grid function.
	6. 100-argstostr.c : a function that concatenates all the arguments of your program.
	7. 101-strtow.c : a function that splits a string into words.

