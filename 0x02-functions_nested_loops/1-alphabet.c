#include "main.h"

/**
 * main - main block
 * Description: Print the alphabet in lower case
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
