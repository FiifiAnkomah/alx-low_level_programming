#include "main.h"

/**
 * int_strlen - return  the length of a string
 * @s:char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
