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

int shell(void)
{
	char *array = NULL; /* array of arguments */
	char *command = NULL; /* first arg of input*/
	char *input = NULL;
	char *inputcp = NULL;
	char *token;
	size_t count, i;
	size_t len;
	pid_t child_pid;

	if (getline(&input, &len, stdin) == -1)
	{
		printf("Error\n");
		free(input);
		exit(0);
	}
	count = 0;
	inputcp = _strdup(input);
	token = strtok(inputcp, " ");
	count++;
	/* get word count */
	while (token != NULL)
	{
		token = strtok(NULL; " ");
		count++;
	}
	free(inputcp);
	array = malloc(sizeof(char *) * count);
	token = strtok(input, " ");
	for (i = 0; i < count; i++)
	{
		array[i] = _strdup(token);
		printf("%s\n", array[i]);
		token = strtok(NULL, " ");
	}
	child_pid = fork();
	if (child_pid != 0)
		wait(NULL);
	else
	{
		execve(const
	}

}
int main(void)
{
	while (1)
	{
		printf("$ ");
		shell();
	}
	return (-1);
}
