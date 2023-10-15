#ifndef MAIN_H
#define MAIN_H
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _check_elf(unsigned char *_e_ident);
void _print_magic(unsigned char *_e_ident);
void _print_class(unsigned char *_e_ident);
void _print_data(unsigned char *_e_ident);
void _print_version(unsigned char *_e_ident);
void print_os(unsigned char *_e_ident);
void _print_osabi(unsigned char *_e_ident);
void _print_type(unsigned int _e_type, unsigned char *_e_ident);
void _print_entry(unsigned long int _e_entry, unsigned char *_e_ident);
void _close_elf(int _elf);

#endif
