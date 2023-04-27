# 0x12-singly_linked_lists

## Objectives

	. When and why using linked lists vs Arrays
	. How to build and use linked lists

## Requirements

	. Editors: vi, vim, emacs
	. Ubuntu 20.04 LTS and gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	. Betty style compliant code. It will be checked using betty-style.pl and betty-doc.pl
	. No global variables
	. No more than 5 functions per file
	. The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden.
	. You are allowed to use `_putchar`
	. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
	. All your header files should be include guarded

## More Info
	
	The structure for the project is given below:

	/**
	 * struct list_s - singly linked list
	 * @str: string - (malloc'ed string)
	 * @len: length of the string
	 * @next: points to the next node
	 *
	 * Description: singly linked list node structure
	 */
	typedef struct list_s
	{
    	char *str;
    	unsigned int len;
    	struct list_s *next;
	} list_t;

## Description of files in the repository

	1. 0-print_list.c : a function that prints all the elements of a list_t list.
	2. 1-list_len.c : a function that returns the number of elements in a linked list_t list.
	3. 2-add_node.c :  a function that adds a new node at the beginning of a list_t list.
	4. 3-add_node_end.c : a function that adds a new node at the end of a list_t list.
	5. 4-free_list.c : a function that frees a list_t list.
	6. 100-first.c : a function that prints before the main function is executed.
	7. 

