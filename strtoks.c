#include "main.h"

/**
 * counter - returns word count (delimiter: space)
 * @str: string
 *
 * Return: word count
 */

size_t counter(char *str)
{
	char *str_cp = NULL;
	char *token = NULL;
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
	free(token);
	return (count);
}

/**
 * pathcounter - returns path count (delimiter: :)
 * @str: string
 *
 * Return: path count
 */

size_t pathcounter(char *str)
{
	char *path_cp = NULL;
	char *token = NULL;
	size_t count = 1;

	path_cp = _strdup(str);
	token = strtok(path_cp, ":");
	while (token != NULL)
	{
		token = strtok(NULL, ":");
		count++;
	}
	/* free copy of string */
	free(path_cp);
	free(token);
	return (count);
}

/**
 * string_parse - tokenizes a string into array of words
 * @str: string
 *
 * Return: pointer to array
 */
char **string_parse(char *str)
{
	char **arr = NULL;
	char *token = NULL;
	size_t i = 0, count = 0; /* iterator */

	count = counter(str);
	arr = malloc(sizeof(char *) * count + 1);
	token = strtok(str, " \n\t\r\a");
	for (i = 0; token != NULL; i++)
	{
		arr[i] = token;
		token = strtok(NULL, " \n\t\r\a");
	}
	arr[i] = NULL;
	free(token);
	return (arr);
}

/**
 * path_parse - tokenizes PATH value into array of paths
 * @str: PATH string
 *
 * Return: pointer to array
 */
char **path_parse(char *str)
{
	char **arr = NULL;
	char *token = NULL;
	size_t i = 0, count = 0; /* iterator */

	count = pathcounter(str);
	arr = malloc(sizeof(char *) * (count + 1));
	token = strtok(str, "=");
	for (i = 0; token != NULL; i++)
	{
		token = strtok(NULL, ":");
		arr[i] = token;
	}
	arr[i] = NULL;
	free(token);
	return (arr);
}
