#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <unistd.h>

/* function prototype to print char */
int _putchar(char c);

/* _puts_recursion() function prototype */
void _puts_recursion(char *s);

/* _print_rev_recursion() prototype */
void _print_rev_recursion(char *s);

/* _strlen_recursion() prototype */
int _strlen_recursion(char *s);

/* factorial() prototype */
int factorial(int n);

/* _pow_recursion() prototype */
int _pow_recursion(int x, int y);

/* sqrt_get() prototype */
int sqrt_get(int n, int x);

/* _sqrt_recursion() prototype */
int _sqrt_recursion(int n);

/* is_prime_number() prototype */
int is_prime_number(int n);

/* check_factors() prototype */
int check_factors(int n, int x);

/* print_reverse() prototype */
void print_reverse(char *s, int len);

/* is_palindrome() prototype */
int is_palindrome(char *s);

/* palindrome_check() prototype */
int palindrome_check(char *s, int i, int j);

/* wildcmp() prototype */
int wildcmp(char *s1, char *s2);

#endif
