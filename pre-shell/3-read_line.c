#include "main.h"

int main(void)
{
	char *text = malloc(1024);
	size_t len = 1024;
		
	printf("$ ");
	/* &text is addr of buffer, &len is how long */
	if (getline(&text, &len, stdin) != 1) /* if not error */
	{
		printf("%s", text);
		return (0);
	}
	printf("error");
	return (-1);

}
