In this folder, we implement functions that test on concepts in pointers, arrays and strings in C coupled with
scope of variables.
At the end of the tasks, one should be able to use pointers and arrays, know the differences between pointers and arrays and use strings and manipulate them.
The functions covered include:

1. 0-strcat.c : Write a function that concatenates two strings.

	. Prototype: char *_strcat(char *dest, char *src);
	. This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
	. Returns a pointer to the resulting string dest

2. 1-strncat.c : Write a function that concatenates two strings.

	. Prototype: char *_strncat(char *dest, char *src, int n);
	. The _strncat function is similar to the _strcat function, except that
	. it will use at most n bytes from src; and
	. src does not need to be null-terminated if it contains n or more bytes
	. Return a pointer to the resulting string dest

3. 2-strncpy.c : Write a function that copies a string.

	. Prototype: char *_strncpy(char *dest, char *src, int n);
	. Your function should work exactly like strncpy

4. 3-strcmp.c : Write a function that compares two strings.

	. Prototype: int _strcmp(char *s1, char *s2);
	. Your function should work exactly like strcmp

5. 4-rev_array.c : Write a function that reverses the content of an array of integers.

	. Prototype: void reverse_array(int *a, int n);
	. Where n is the number of elements of the array

6. 5-string_toupper.c : Write a function that changes all lowercase letters of a string to uppercase.

	. Prototype: char *string_toupper(char *);

7. 6-cap_string.c : Write a function that capitalizes all words of a string.

	. Prototype: char *cap_string(char *);
	. Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

8. 7-leet.c : Write a function that encodes a string into 1337.

	. Letters a and A should be replaced by 4
	. Letters e and E should be replaced by 3
	. Letters o and O should be replaced by 0
	. Letters t and T should be replaced by 7
	. Letters l and L should be replaced by 1
	. Prototype: char *leet(char *);
	. You can only use one if in your code
	. You can only use two loops in your code
	. You are not allowed to use switch
	. You are not allowed to use any ternary operation

9. 100-rot13.c : Write a function that prints an integer.

	. Prototype: void print_number(int n);
	. You can only use _putchar function to print
	. You are not allowed to use long
	. You are not allowed to use arrays or pointers
	. You are not allowed to hard-code special values

10. 101-print_number.c : Write a function that prints an integer.

	. Prototype: void print_number(int n);
	. You can only use _putchar function to print
	. You are not allowed to use long
	. You are not allowed to use arrays or pointers
	. You are not allowed to hard-code special values

11. 102-magic.c : Add one line to this code, so that the program prints a[2] = 98, followed by a new line.

	. You are not allowed to use the variable a in your new line of code
	. You are not allowed to modify the variable p
	. You can only write one statement
	. You are not allowed to use ,
	. You are not allowed to code anything else than the line of expected line of code at the expected line
	. Your code should be written at line 19, before the ;
	. Do not remove anything from the initial code (not even the comments)
	. and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
	. You are allowed to use the standard library

12. 103-infinite_add.c : Write a function that prints a buffer.

	. Prototype: void print_buffer(char *b, int size);
	. The function must print the content of size bytes of the buffer pointed by b
	. The output should print 10 bytes per line
	. Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
	. Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
	. Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
	. Each line ends with a new line \n
	. If size is 0 or less, the output should be a new line only \n
	. You are allowed to use the standard library
	. The output should look like the following example, and formatted exactly the same way:

13. 104-print_buffer.c :Write a function that prints a buffer.

	. Prototype: void print_buffer(char *b, int size);
	. The function must print the content of size bytes of the buffer pointed by b
	. The output should print 10 bytes per line
	. Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
	. Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
	. Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
	. Each line ends with a new line \n
	. If size is 0 or less, the output should be a new line only \n
	. You are allowed to use the standard library
	. The output should look like the following example, and formatted exactly the same way:

