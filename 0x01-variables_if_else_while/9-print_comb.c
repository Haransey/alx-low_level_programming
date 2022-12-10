#include <stdio.h>

/**
 * main - main block
 * Description: Print the numbers with comma and space
 * Return: 0
 */

int main(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
