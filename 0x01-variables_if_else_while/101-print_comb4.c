#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			for (z = 48; z < 58; z++)
			{
				if (x == y || y == z || x == z)
				{
					continue;
				}
				putchar(x);
				putchar(y);
				putchar(z);
				if (x == 55 && y == 56 && z == 57)
				{
					break;
				}
				else
				{
					 putchar(',');
					 putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
