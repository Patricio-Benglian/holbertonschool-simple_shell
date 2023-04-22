#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - returns pointer to a copy of string
 * @str: string
 * Return: Always 0 (Success)
 */
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


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
int main(void)
{
	char **array; /* array of pointers to strings */
	char *atom = malloc(1024); /* buffer that holds the stdin string */
	char *token;
	char *atom2 = malloc(1024); /* buffer that holds input for arg count */
	size_t count = 1, i; /* counter */
	size_t len = 1024;

	printf("$ ");
	/* get input */
	getline(&atom, &len, stdin); /* save input */
	atom2 = _strdup(atom); /* save backup for counting args */
	/* count words */
	token = strtok(atom2, " ");
	while (token != NULL)
	{
		token = strtok(NULL, " ");
		count++;
	}
	free(atom2); /* free copy of string */

	/* assign array tokens */
	array = malloc(sizeof(char *) * count);
	token = strtok(atom, " ");
	for (i = 0; i < count - 1; i++)
	{
		//array[i] = malloc(sizeof(_strlen(token)));
		array[i] = _strdup(token);
		printf("%s\n", array[i]);
		token = strtok(NULL, " ");
	}
	return (0);
// Should return array not 0 but idk why it doesnt workkkkkkk 
// 
}
