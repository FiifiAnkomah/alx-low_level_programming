#include "main.h"

/**
 * int_strlen - return  the length of a string
 * Return: length of string
 */

int_strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
