#include "main.h"

/**
 * print_alphabet - use to print alphabet
 * Description: Print the alphabet in lower case using print_alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
