#include "main.h"

int main(void)
{
	char *atom = malloc(1024);
	size_t len = 1024;
	char *token;
	char *arr;
	size_t i = 0;

	printf("$ ");
	/* &atom is addr of buffer, &len is how long */
	if (getline(&atom, &len, stdin) != 1) /* if not error */
	{
		token = strtok(atom, " ");
		arr = malloc(strlen(atom));
		arr[i] = token;
		while (token)
		{
			i++;
			token = strtok(NULL, " ");
			arr[i] = token;
		}
		for (i = 0; arr[i]; i++)
		{
			printf("%s\n", arr[i]);
		}
		return (0);
	}

	printf("error");
	return (-1);	
}
