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

/* Environment variable */
extern char **environ;

/* Prototypes */
int main(void);
char *_strdup(char *str);
char **get_input(void);
size_t counter(char *str);
size_t pathcounter(char *str);
char **string_parse(char *str);
char **path_parse(char *str);
char *_getenv(void);
char *_which(char *arg, char **arr);
int exec_func(char *path, char **args);
#endif

/* Prototypes */
int main(void);
char *_strdup(char *str);
char **get_input(void);
size_t counter(char *str);
size_t pathcounter(char *str);
char **string_parse(char *str);
char **path_parse(char *str);
char *_getenv(void);
char *_which(char *arg, char **arr);
int exec_func(char *path, char **args);
#endif