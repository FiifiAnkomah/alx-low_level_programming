#include <stdio.h>
#include <unistd.h>


/**
   * main - Entry point
 
   * Description: Print characters below 10,
 
   * Return: Always 0 (Success)
   */

int main(void)

{
	int n;

	for (n = 0; n < 10; n++)
		{
			putchar(n + '0');
		}
		putchar('\n');
		
		return (0);

}
