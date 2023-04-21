#include "main.h"

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

char *string_parse(char *restrict str)
{
	char **array; /* array to return */	
	char *str_cp = malloc(sizeof(str));
	char *token;
	size_t count = 0;
	size_t i;

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
	token = strtok(str, " ");
	for (i = 0; i < count; i++)
	{
		//printf("%s\n", array[i]);
		token = strtok(NULL, " ");
		array[i] = _strdup(token);
	}
	return (*array);
}


int main(void)
{
	char *input = malloc(1); /* recieved from terminal */
	size_t len = 1; /* length */
	char *args = NULL; /* recieved argument array */
	pid_t child_pid;
	char *command;
	char *path = NULL;
	char *array = NULL;

	input = NULL;
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
			//args = string_parse(input); /* recieves arr arg */
			command = strtok(input, " ");
			while (token != NULL)
			{
				
			}

			child_pid = fork(); /* makes child */
			if (child_pid != 0)
				wait(NULL);
			else
			{
				//path[0] = args[0];
				execve(path, args, NULL); /* not sure if null */
				return (0);
			}
			input = NULL;
			free(input);
		}
	}
return (-1);
}
