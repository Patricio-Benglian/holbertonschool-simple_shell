#include "main.h"

int main(void)
{

	char *text = NULL;
	size_t len = 0;
	// FILE *stream;
		

	printf("$ ");
	while (getline(&text, &len, 0) != -1)
	{
		printf("%s\n", text);
		return (0);
	}
	return (-1);
}
