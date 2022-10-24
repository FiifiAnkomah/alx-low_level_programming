#include "main.h"

/**
 * void puts_half - print the second half of the string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
