#include "main.h"

size_t counter(char *str)
{
	char *str_cp = malloc(sizeof(str)), *token;
	size_t count = 1;

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
	size_t count = 1;

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