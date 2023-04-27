#include "main.h"

char **get_input(void)
{
    char *input = NULL;
    size_t len = 0;

    if (getline(&input, &len, stdin) == -1)
    {
        free(input);
        exit (0);
    }
    return (string_parse(input, counter(input)));
}