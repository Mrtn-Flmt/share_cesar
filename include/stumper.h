/*
** EPITECH PROJECT, 2021
** B-CPE-210-LIL-2-1-stumper1-gabin.benard
** File description:
** stumper
*/

#ifndef STUMPER_H_
#define STUMPER_H_

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdbool.h>
#include <string.h>
#include <sys/stat.h>

/* Function check error */
int error(int ac, char **av);
int fs_open_file(char const *filepath);
int fs_read_file(int fd, char *buffer, int size);
char *get_content(char *filepath);

/* Function for cesar*/
int cesar(char *s, int n, int status);
void change_min(char *str, int i, int n);
void change_maj(char *str, int i, int n);

/* Print crypt str or file */
void print_in_file(char *new);

#endif /* !STUMPER_H_ */