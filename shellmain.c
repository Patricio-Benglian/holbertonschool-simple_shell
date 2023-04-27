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
			exit(1);
		}
		args = string_parse(input);
		/* if (is_exit(args)) */
		/**
		 *{
		 *free(args);
		 *free(input);
		 *exit(1);
		 *}
		 */
		pathenv = strdup(_getenv());
		path = path_parse(pathenv);

		filepath = _which(args[0], path);

		exec_func(filepath, args);

		free(filepath);
		free(args);
		free(path);
		free(pathenv);
	}
	return (-1);
}
