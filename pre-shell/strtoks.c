#include "main.h"

#include "main.h"

size_t counter(char *str)
{
    char *str_cp = malloc(sizeof(str)), *token;
	size_t count = 0;

    str_cp = strdup(str);
	token = strtok(str_cp, " ");
	while (token != NULL)
	{
		token = strtok(NULL, " ");
		count++;
	}
	/* free copy of string */
	free(str_cp);
    return (count);
}

size_t pathcounter(char *str)
{
    char *str_cp = malloc(sizeof(str)), *token;
	size_t count = 0;

    str_cp = _strdup(str);
	token = strtok(str_cp, ":");
	while (token != NULL)
	{
		token = strtok(NULL, ":");
		count++;
	}
	/* free copy of string */
	free(str_cp);
    return (count);
}

/**
 * string_parse -
 * @str:
 * @count:
 * 
 * Return:
*/
char **string_parse(char *str, size_t count)
{
    char **arr = malloc(sizeof(char *) * count);
    char *token;
    size_t i; /* iterator */

    token = strtok(str, " \n\t");
    for (i = 0; token != NULL; i++)
    {
        arr[i] = _strdup(token); /* dup for mem allo */
        token = strtok(NULL, " \n\t");
    }
    return (arr);
}

/**
 * path_parse -
 * @str:
 * @count:
 * 
 * Return:
*/
char **path_parse(char *str, size_t count)
{
    char **arr = malloc(sizeof(char *) * count);
    char *token;
    size_t i; /* iterator */

    token = strtok(str, "=");
    for (i = 0; token != NULL; i++)
    {
        token = strtok(NULL, ":");
        arr[i] = _strdup(token); /* dup for mem allo */
    }
    return (arr);
}