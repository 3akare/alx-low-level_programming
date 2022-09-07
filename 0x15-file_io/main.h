#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define SUCCESS 1
#define BUF_SIZE 1024
#define FAIL -1
#define EXIT97 97
#define EXIT98 98
#define EXIT99 99
#define EXIT100 100

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
