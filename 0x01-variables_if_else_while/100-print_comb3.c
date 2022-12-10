#include <stdio.h>

/**
 * main - main block
 * Description: Print the two digit numbers with comma and space
 * Return: 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < 100)
	{
		b = a / 10;
		c = a % 10;
		if (c > b)
		{
			putchar(b + '0');
			putchar(c + '0');
			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
