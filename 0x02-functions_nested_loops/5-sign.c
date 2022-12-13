#include "main.h"

/**
 * print_sign - This prints the sign of a number
 * @n: input
 * Return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	
	else
	{
		_putchar (45);
		return (-1);
	}
}
