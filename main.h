#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/* Prototypes */
int main(void);
char *_strdup(char *str);
char **get_input(void);
size_t counter(char *str);
char **string_parse(char *str, size_t count);
#endif
