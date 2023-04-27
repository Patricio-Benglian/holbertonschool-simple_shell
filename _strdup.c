#include "main.h"

/**
 * _strdup - duplicates string and allocates memory
 * @str: string
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i = 0, length = 0;
	char *arr = NULL;
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