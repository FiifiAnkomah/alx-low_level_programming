#include "main.h"

/**
 * void rev_string - reversing a string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int a, b, c;
	char i;

	for (a = 0; s[a] != '\0'; a++)
		;
	c = a;
	for (a--; b = 0; b < 1 / 2; a--; b++)
	{
		i = s[b];
		s[b] = s[a];
		s[a] = i;
	}
}
