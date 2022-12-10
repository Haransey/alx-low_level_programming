#include <stdio.h>

/**
 * main - main block
 * Description: Print the alphabet in lower case except e and q
 * Return: 0
 */

int main(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		if (a != 101 && a != 113)
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
