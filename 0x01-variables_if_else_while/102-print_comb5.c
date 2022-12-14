#include <stdio.h>

/**
 * main - main block
 * Description: Print the two digit numbers with comma and space in two places
 * Return: 0
 */

int main(void)
{
	int a, b;
	int i, j, k, l;

	for (a = 0; a < 100; a++)
	{
		i = a / 10;
		j = a % 10;

		for (b = 0; b < 100; b++)
		{
			k = b / 10;
			l = b % 10;
			if (i < k || (i == k && j < l))
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(32);
				putchar(k + '0');
				putchar(l + '0');

				if (!(i == 9 && j == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
