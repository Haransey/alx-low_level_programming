#include "main.h"

/**
 * print_alphabet_x10 - use to print alphabet 10 times
 * Description: Print the alphabet in lower case using print_alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a, n;

	n = 0;
	while (n < 10)
	{
		a = 97;
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
	n++;
	_putchar('\n');
	}
}
