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

int arg_counter(char *restrict str)
{
	char *str_cp = malloc(sizeof(str));
	char *token;
	size_t count = 0;

	str_cp = _strdup(str);

	token = strtok(str_cp, " ");
	while (token != NULL)
	{
		token = strtok(NULL, " ");
		count++;
	}
	/* free copy of string */
	free(str_cp);

	token = strtok(str, " ");
	return (count);
}


int main(void)
{
	char *input = malloc(1); /* recieved from terminal */
	char *args = NULL; /* recieved argument array */
	char *command = NULL;
	char *path = NULL;
	char *array = NULL;
	char *token = NULL;
	size_t len = 1; /* length */
	pid_t child_pid;
	int count;
	int arg_count;

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
			count = 0; /* counts */
			arg_count = string_parse(input); /* recieves arr arg */
			array = malloc(sizeof(char *) + count);
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
