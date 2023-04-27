#include "main.h"

int main(void)
{
    char **args = NULL;
    char **path = NULL;
    char *input = NULL;
    char *pathenv = NULL;
    char *filepath = NULL;
    size_t len = 0;

    while (1)
    {
        printf("$ ");

    if (getline(&input, &len, stdin) == -1)
    {
        free(input);
        exit (0);
    }
        args = malloc(1024);
        path = malloc(1024);
        /* get args and path */
        args = string_parse(input, counter(input));
        pathenv = _getenv();
        path = path_parse(pathenv, pathcounter(pathenv));
        
         filepath = _which(args[0], path);
         exec_func(filepath, args);

        free(args);
        free(path);
    }
    return (-1);
}