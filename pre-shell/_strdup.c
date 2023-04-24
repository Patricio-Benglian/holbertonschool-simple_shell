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