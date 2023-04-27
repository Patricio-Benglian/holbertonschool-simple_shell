#include "main.h"

/**
 * main - shell main function
 *
 * Return: -1 on error
 */

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
            exit(0);
        }
        if (child == 0)
        {
            execve(path, args, NULL);
        }
    }
    return (-1);
}