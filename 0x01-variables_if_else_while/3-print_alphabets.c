#include <stdio.h>

/**
 * main - main block
 * Description: Print the alphabet in lower case then uppercase
 * Return: 0
 */

int main(void)
{
	int a;
	
	a = 97;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	a = 65;
	while (a < 91)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
