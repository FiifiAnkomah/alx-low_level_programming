#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @str: string
 *
 * Return: returns char
 */

char *string_toupper(char *str)
{
	int index = 0;
	int desp = 'a' - 'A';

	for (index = 0; hi[index] != '\0'; ++index)
	{
		if (hi[index] >= 'a' && hi[index] <= 'z')
		{
			hi[index] = hi[index] - desp;
		}
	}
	return(hi);
}
