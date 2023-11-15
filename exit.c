#include "shell.h"

/**
 * handle_exit - function that terminates the program when
 * the user types "exit".
 * @command: the command string to be read.
 * Return: void.
 */
void handle_exit(char *command)
{
	if (strcmp("exit", command) == 0)
	{
		free(command);
		exit(EXIT_SUCCESS);
	}
}


