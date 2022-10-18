#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j, k;

	for (j = 0; j < 100; j++)
	{
		for (k = 0; i < 100; k++)
		{
			if (k < j)
			{
				putchar((j / 10) + 48);
				putchar((j % 10 )+ 48);
				putchar(' ');
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				if (j != 98 || k != 99)
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
