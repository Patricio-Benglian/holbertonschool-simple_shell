#include "main.h"

/**
 * main - shell main function
 *
 * Return: -1 on error
 */

int main(void)
{
	char **args = NULL, **path = NULL, *input = NULL, *pathenv = NULL;
	char *filepath = NULL;
	size_t len = 0;

	while (1)
	{
	atty:
		if (isatty(fileno(stdin)))
			printf("📎 ");

		if (getline(&input, &len, stdin) == -1)
		{
			if (isatty(fileno(stdin)))
				printf("\n");
			free(input);
			exit(errno);
		}
		args = string_parse(input);
		if (args[0]) /* exit built in */
		{
			if (strcmp(args[0], "exit") == 0)
			{
				free(args);
				free(input);
				exit(errno);
			}
		}
		else
		{
			free(args);
			goto atty;
		}

		pathenv = strdup(_getenv());
		path = path_parse(pathenv);

		filepath = _which(args[0], path);

		if (filepath != NULL)
		{
			exec_func(filepath, args);
			free(filepath);
		}
		free(path);
		free(args);
		free(pathenv);
		fflush(stdout);
	}
	return (0);
}
