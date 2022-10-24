#include "main.h"

/**
 * void_puts - print a string, followed by a new line
 */

void_puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
