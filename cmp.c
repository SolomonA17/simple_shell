#include "shell.h"

/**
 * _strncmp - compares n bytes in s1 and s2
 * @s1: first string to be compared
 * @s2: second string to be compared
 * @n: number of bytes to be checked
 * Return: > 0 if s2 is less than s1, < 0 if s1 < s2,
 * 0 is s1 is equal to s2
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	if (*s1 == *s2)
		return (*s1 ? _strncmp(s1 + 1, s2 + 1, n - 1) : 0);
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (*s1 - *s2);
}


