#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int _strlen(char *s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *multiplication(char *s1, char *s2);
void print_result(int *result, int len);
int check_if_digit(char *str);
int _isdigit(int c);


#endif
