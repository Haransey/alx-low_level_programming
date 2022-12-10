#include <stdio.h>

/**
 * main - main block
 * Description: Print the numbers
 * Return: 0
 */

int main(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
