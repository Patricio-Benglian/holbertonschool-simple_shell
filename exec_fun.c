#include "main.h"

/**
 * exec_func - executes a command from filepath recieved with args recieved
 * @path: path to command
 * @args: array of arguments for comand
 *
 * Return: 1 on success
 */

int exec_func(char *path, char **args)
{
	pid_t child;

	child = fork();
	if (child < 0)
	{
		perror("Error");
		return (-1);
	}
	if (child > 0)
		wait(NULL);
	if (child == 0)
	{
		execve(path, args, environ);
		exit(1);
	}
	return (0);
}
