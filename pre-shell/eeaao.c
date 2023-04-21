#include "main.c"

char *string_parse(char *restrict str)
{
	
}


int main(void)
{
	char *input = malloc(1); /* recieved from terminal */
	size_t len = 1; /* length */
	char *arg = NULL; /* recieved argument array */
	pid_t child_pid;

	input = NULL;
	while (!input)
	{
		/* checks if not an error */
		if (getline(&input, &len, stdin) == -1)
		{
			printf("Error\n");
			return (-1);
		}
		else
		{
			args = char *string_parse(input); /* recieves arr arg */
			child_pid = fork(); /* makes child */
			if (child_pid != 0)
			{
				wait(NULL);
			}
			else
			{
				execve(args[0], args, NULL); /* not sure if null */
				return (0);
			}
			input = NULL;
			free(input);
		}
	}

}
