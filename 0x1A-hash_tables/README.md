# 0x1A-hash_tables

## Objectives

	. What is a hash function
	. What makes a good hash function
	. What is a hash table, how do they work and how to use them
	. What is a collision and what are the main ways of dealing with collisions in the context of a hash table
	. What are the advantages and drawbacks of using hash tables
	. What are the most common use cases of hash tables

## Requirements

### C

	. Editors: `vi, vim, emacs`
	. Ubuntu 20.04 LTS and gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	. All files should end with a new line
    . A `README.md` file, at the root of the folder of the project is mandatory
	. `Betty` style compliant code. It will be checked using `betty-style.pl` and `betty-doc.pl`
	. No global variables
	. No more than 5 functions per file
    . Allowed to use the standard library
	. The prototypes of all functions should be included in your header file called hash_tables.h
	. All header files should be include guarded

## Description of files in the repository

	. 0-hash_table_create.c - function that creates a hash table
	. 1-djb2.c - hash function that implements the djb2 algorithm
	. 2-key_index.c - function to generate an index of the key
	. 3-hash_table_set.c - function to add an element to the hash table
	. 4-hash_table_get.c - value that retrieves a value associated with key
	. 5-hash_table_print.c - function that prints a hash table
	. 6-hash_table_delete.c - function that deletes a hash table
	. 100-sorted_hash_table.c - creates a hash table with a sorted linked list, by key (sorted on ASCII value)
