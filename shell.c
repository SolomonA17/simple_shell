#include "shell.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * @envp: array of environment variables
 * Return: 0
 */
int main(int argc, char **argv, char **envp)
{
	bool is_interactive = (argc == 1 && isatty(STDIN_FILENO));

	prompt(argv, envp, is_interactive);
	return (0);
}


