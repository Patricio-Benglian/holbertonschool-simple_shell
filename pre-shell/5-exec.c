#include "main.h"

int main(void)
{
	/* define variables */
	pid_t child_pid;
	int i; /* iterator */
	/* basically array of input to terminal */
	char *const input[] = {"/bin/ls", "-l", "/tmp", NULL};

	/* Loop fork 5 times */
	/* ONLY if not child process */
	for (i = 0; i < 5 && child_pid != 0; i++)
	{
		child_pid = fork();
		printf("A child is born: %i\n", child_pid);
		wait(NULL);
	}
	/* executes only if child (lol) */
	if (child_pid == 0)
	{
		/* order of arguments is: */
		/* path, arg, env. Since two args present, */
		/* then two paths have to be added, one for each */
		execve(input[1], input, NULL);
	}
	return (0);
}
