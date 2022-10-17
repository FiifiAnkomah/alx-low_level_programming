#include <stdio.h>


/**

* main - Entry point
*
* Description: prints the alphabet in lowercase, followed by a new line, except q and e
*
* Return: Aways 0 (Sucess)
*/

int main(void)

{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
	putchar('\n');
	return (0);
}

