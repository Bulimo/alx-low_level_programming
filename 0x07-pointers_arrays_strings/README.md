In this folder, we implement functions that test on concepts in pointers to pointers and how to use them, multidimensional arrays and how to use them and common C standard library functions to manipulate strings.
The functions covered include:

1. 0-memset.c : Write a function that fills memory with a constant byte.

	. Prototype: char *_memset(char *s, char b, unsigned int n);
	. The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
	. Returns a pointer to the memory area s

2. 1-memcpy.c : Write a function that copies memory area.

	. Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
	. The _memcpy() function copies n bytes from memory area src to memory area dest
	. Returns a pointer to dest

3. 2-strchr.c : Write a function that locates a character in a string.

	. Prototype: char *_strchr(char *s, char c);
	. Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

4. 3-strspn.c : Write a function that gets the length of a prefix substring.

	. Prototype: unsigned int _strspn(char *s, char *accept);
	. Returns the number of bytes in the initial segment of s which consist only of bytes from accept

