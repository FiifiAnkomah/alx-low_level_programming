#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int j, k;

	for (j = 0; j <= 99; j++)
	{
		for (k = j; i <= 99; k++)
		{
			if (k != j)
			{
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				putchar(' ');
				putchar(k / 10 + 48);

				if (j * 100 + k != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	puchar(''\n);
	return (0);

}
