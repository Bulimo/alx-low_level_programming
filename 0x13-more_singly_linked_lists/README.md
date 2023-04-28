# 0x13-more_singly_linked_lists

## Objectives

	. How to use linked lists

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
	 * struct listint_s - singly linked list
	 * @n: integer
	 * @next: points to the next node
	 *
	 * Description: singly linked list node structure
	 * 
	 */
	typedef struct listint_s
	{
    	int n;
    	struct listint_s *next;
	} listint_t;

## Description of files in the repository

	1. 0-print_listint.c : a function that prints all the elements of a listint_t list.
	2. 1-listint_len.c : a function that returns the number of elements in a linked listint_t list.
	3. 2-add_nodeint.c : a function that adds a new node at the beginning of a listint_t list.
	4. 3-add_nodeint_end.c :  a function that adds a new node at the end of a listint_t list.
	5. 4-free_listint.c :  a function that frees a listint_t list.
	6. 5-free_listint2.c : a function that frees a listint_t list.
	7. 6-pop_listint.c :  function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
	8. 
