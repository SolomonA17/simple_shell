#include "shell.h"

/**
 * _strcat - This function appends the `source` string to the `destination` string
 * @destination: string argument
 * @source: string argument
 * Return: String
 */
char *_strcat(char *destination, char *source)
{
	size_t destination_length = 0;
	size_t source_length = 0;
	size_t index;

	while (source[source_length] != '\0')
	{
		source_length++;
	}
	while (destination[destination_length] != '\0')
	{
		destination_length++;
	}

	for (index = 0; index < source_length; index++)
	{
		destination[destination_length + index] = source[index];
	}
	destination[destination_length + source_length] = '\0';

	return (destination);
}


