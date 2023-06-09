#include "main.h"

/**
 * _getenv - gets environment PATH value for process
 *
 * Return: value of PATH variable
 */

char *_getenv(void)
{
	size_t i = 0; /* iterator */

	for (i = 0; environ[i]; i++)
		if (strncmp(environ[i], "PATH", 4) == 0)
			return (environ[i]);
	return (NULL);
}

/**
 * _which - finds if command exists within any filepath
 * @arg: command
 * @arr: array of arguments
 *
 * Return: string of full path
 */

char *_which(char *arg, char **arr)
{
	char *filepath = NULL;
	size_t i = 0; /* iterator */

	filepath = malloc(sizeof(char) * strlen(arg) + strlen(arr[0]) + 2);
	if (!filepath)
	{
		exit(1);
	}
	/* checks if input is full filepath */
	if (access(arg, F_OK) == 0)
	{
		free(filepath);
		filepath = strdup(arg);
		return (filepath);
	}

	for (i = 0; arr[i]; i++)
	{
		sprintf(filepath, "%s/%s", arr[i], arg);
		if (access(filepath, F_OK) == 0)
			return (filepath);
	}
	if (!arr[i]) /* is null (end of arr) */
	{
		free(filepath);
		printf("bash: %s: command not found\n", arg);
	}
	return (NULL);
}

