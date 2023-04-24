#include "main.h"

char **string_parse(char *str, size_t count)
{
    char **array = malloc(sizeof(char *) * count);
    char *token;
    size_t i; /* iterator */

    token = strtok(str, " \n\t");
    for (i = 0; token != NULL; i++)
    {
        array[i] = _strdup(token);
        token = strtok(NULL, " \n\t");
        printf("%s\n", array[i]);
    }
    return (array);
}