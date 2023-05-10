# 0x15-file_io

## Objectives

	. How to create, open, close, read and write files
i	. What are file descriptors; the 3 standard file descriptors, what are their purpose and what are their POSIX names
	. How to use the I/O system calls open, close, read and write
	. What are file permissions, and how to set them when creating a file with the open system call
	. What is a system call; the difference between a function and a system call

## Requirements

	. Editors: vi, vim, emacs
	. Ubuntu 20.04 LTS and gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	. Betty style compliant code. It will be checked using betty-style.pl and betty-doc.pl
	. No global variables
	. No more than 5 functions per file
	. The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden.
	. Allowed syscalls: read, write, open, close
	. You are allowed to use `_putchar`
	. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
	. All your header files should be include guarded

## Description of files in the repository

	1. 0-read_textfile.c :  a function that reads a text file and prints it to the POSIX standard output.
	2. 1-create_file.c : a function that creates a file.
	3. 2-append_text_to_file.c :  a function that appends text at the end of a file.
	4. 3-cp.c : a program that copies the content of a file to another file.
	5. 100-elf_header.c : a program that displays the information contained in the ELF header at the start of an ELF file.


