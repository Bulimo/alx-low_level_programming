#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
size_t _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
void print_error(int error, char *filename);
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_error(int error, char *s);

#endif
