#include "main.h"

int main(void)
{
    char **args = NULL;
    char *path;
    pid_t child;

    while (1)
    {
        printf("$ ");
        args = get_input();
       
        //get_env to add later
        //execve should be in child stuff hahaha
        path = malloc(sizeof(args[0]));
        child = fork();
        if (child != 0)
        {
            wait(NULL);
        }
        if (child == 0)
        {
        sprintf(path, "%s%s", "/usr/bin/", args[0]);
        execve(path, args, NULL);
        return (0);
        }
        if (child < 0)
        {
            return (-1);
        }
    }
    return (-1);
}