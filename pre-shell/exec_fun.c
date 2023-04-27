#include "main.h"

int exec_func(char *path, char **args)
{
    pid_t child;

    child = fork();
    if (child < 0)
    {
        perror("Error");
        return (-1);
    }
    if (child > 0)
        wait(NULL);
    if (child == 0)
    {
        execve(path, args, environ);
        return (1);
    }

return (1);
}