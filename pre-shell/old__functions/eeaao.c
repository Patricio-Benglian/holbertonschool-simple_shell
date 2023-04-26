#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

char *_strdup(char *str)
{
	unsigned int i, length;
	char *arr;
	if (!str)
		return (NULL);
	for (length = 0; str[length]; length++)
		;
	arr = malloc(sizeof(char) * length + 1);
	if (!arr)
		return (NULL);
	for (i = 0; i < length; i++)
		arr[i] = str[i];
	return (arr);
}
char **string_parse(char *str)
{
	char **array; /* array to return */	
	char *str_cp = malloc(sizeof(str));
	char *token;
	size_t count = 0, i;

	str_cp = _strdup(str);
	token = strtok(str_cp, " ");
	while (token != NULL)
	{
		token = strtok(NULL, " ");
		count++;
	}
	/* free copy of string */
	free(str_cp);

	array = malloc(sizeof(char *) * count);
	token = strtok(str, " \n\t");
	for (i = 0; i < count; i++)
	{
		array[i] = _strdup(token);
		printf("%s\n", array[i]);
		token = strtok(NULL, " \n\t");
	}
	array[i + 1] = NULL;
	return (array);
}
int main(void)
{
	char *input = NULL; /* recieved from terminal */
	size_t len = 1; /* length */
	char **args = NULL; /* recieved argument array */
	pid_t child_pid;
	char *path = NULL;

	while (!input)
	{
		/* checks if not an error */
		printf("$ ");
		if (getline(&input, &len, stdin) == -1)
		{
			printf("Error\n");
			return (-1);
		}
		else
		{
			path = malloc(1024);
			args = malloc(sizeof(string_parse(input)));
			args = string_parse(input); /* recieves arr arg */
			child_pid = fork(); /* makes child */
			if (child_pid != 0)
				wait(NULL);
			if (child_pid == 0)
			{
				sprintf(path, "%s%s", "/usr/bin/", args[0]);
				execve(path, args, NULL);
				return (0);
			}
			input = NULL;
			free(input);
			free(path);
			free(args);
		}
	}
	return (-1);
}
