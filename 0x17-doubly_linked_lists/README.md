# 0x17-doubly_linked_lists

## Objectives

	. How to use linked lists
    . What is a doubly linked list
    . How to use doubly linked lists

## Requirements

	. Editors: `vi, vim, emacs`
	. Ubuntu 20.04 LTS and gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	. Betty style compliant code. It will be checked using `betty-style.pl` and `betty-doc.pl`
	. No global variables
	. No more than 5 functions per file
	. The only C standard library functions allowed are malloc, freei, printf and exit.
	. The prototypes of all your functions should be included in your header file called `lists.h`
	. All your header files should be include guarded

## More Info

	The structure for the project is given below:

	/**
	 * struct dlistint_s - doubly linked list
	 * @n: integer
     * @prev: points to the previous node
	 * @next: points to the next node
	 *
	 * Description: doubly linked list node structure
	 *
	 */
	typedef struct dlistint_s
	{
    	int n;
    	struct dlistint_s *prev;
    	struct dlistint_s *next;
	} dlistint_t;

## Description of files in the repository

	. 0-print_dlistint.c - a function that prints all the elements of a dlistint_t list.
    . 1-dlistint_len.c -  a function that returns the number of elements in a linked dlistint_t list.
    . 2-add_dnodeint.c - a function that adds a new node at the beginning of a dlistint_t list.
    . 3-add_dnodeint_end.c - a function that adds a new node at the end of a dlistint_t list.
    . 4-free_dlistint.c - a function that frees a dlistint_t list.
    . 5-get_dnodeint.c - a function that returns the nth node of a dlistint_t linked list.
    . 6-sum_dlistint.c - a function that returns the sum of all the data (n) of a dlistint_t linked list
    . 7-insert_dnodeint.c - a function that inserts a new node at a given position.
    . 8-delete_dnodeint.c - a function that deletes the node at index index of a dlistint_t linked list.
    . 100-password - the password for crackme4.
    . 102-result - Find the largest palindrome made from the product of two 3-digit numbers.
    . 103-keygen.c - a keygen for crackme5.
