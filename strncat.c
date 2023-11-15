#include "shell.h"

/**
 * strncat - Concatenates two strings where n number
 *      of bytes are copied from source.
 * @destination: Pointer to destination string.
 * @source: Pointer to source string.
 * @number_of_bytes_to_copy: n bytes to copy from src.
 *
 * Return: Pointer to destination string.
 */
char *strncat(char *destination, const char *source, size_t number_of_bytes_to_copy)
{
	size_t destination_length = strlen(destination);
	size_t index;

	for (index = 0; index < number_of_bytes_to_copy && source[index] != '\0'; index++)
		destination[destination_length + index] = source[index];
	destination[destination_length + index] = '\0';

	return (destination);
}


