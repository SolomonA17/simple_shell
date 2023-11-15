#include "shell.h"

/**
 * get_integer_length - a function that returns the length of an integer
 * @number: the integer to calculate the length of
 * Return: the length of the integer
 */
int get_integer_length(int number)
{
	unsigned int num;
	int length = 1;

	if (number < 0)
	{
		length++;
		num = number * -1;
	}
	else
	{
		num = number;
	}
	while (num > 9)
	{
		length++;
		num = num / 10;
	}

	return (length);
}

/**
 * integer_to_string - a function that converts an integer to a string
 * @number: the integer to convert
 * Return: a pointer to the string representation of the integer, or NULL if
 * an error occurred
 */
char *integer_to_string(int number)
{
	char *buffer;
	size_t i;
	int length = get_integer_length(number);

	buffer = malloc(length + 1);
	if (!buffer)
	{
		return (NULL);
	}
	buffer[length] = '\0';
	if (number < 0)
	{
		i = number * -1;
		*buffer = '-';
	}
	else
	{
		i = number;
	}
	length--;

	do {
		*(buffer + length) = (i % 10) + '0';
		i /= 10;
		length--;
	} while (i > 0);

	return (buffer);
}

/**
 * print_error - a function that prints an error message to the console
 * @error_code: the error code
 * @argv: the command line arguments
 * @command: the command that caused the error
 * Return: void
 */
void print_error(int error_code, char **argv, char *command)
{
	int length;
	char *error_message, *count_string;

	count_string = integer_to_string(error_code);
	length = _strlen(argv[0]) + _strlen(command) + _strlen(count_string) + 17;
	error_message = malloc(length);
	if (!error_message)
	{
		return;
	}
	_strcpy(error_message, argv[0]);
	_strcat(error_message, ": ");
	_strcat(error_message, count_string);
	_strcat(error_message, ": ");
	_strcat(error_message, command);
	_strcat(error_message, ": not found\n");
	_strcat(error_message, "\0");
	write(STDOUT_FILENO, error_message, length);
	free(error_message);
}


