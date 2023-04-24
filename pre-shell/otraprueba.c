#include "main.h"

int shelly(void)
{
    char *array = NULL; /* array of arguments */
    char *command = NULL; /* first arg of input*/
    char *input = NULL;
    size_t len;

    if (getline(&input, &len, stdin) == -1)
    {
        printf("Error\n");
        free(input);
        exit(0);
    }
    
    
}
int main(void)
{
    while (1)
    {
        printf("$ ");
        shelly();
    }
    return (-1);
}