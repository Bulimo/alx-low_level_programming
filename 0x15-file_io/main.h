#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
size_t _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
void print_error(int error, char *filename);

#endif
