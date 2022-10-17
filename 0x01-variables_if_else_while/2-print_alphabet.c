#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */

int main(void)

{
	char a = 'a';


	while (a <= 'z')
			{
			putchar(a);
			a++;
			}
	putchar('\n');
	return (0);
}
