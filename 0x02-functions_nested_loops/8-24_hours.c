#include "main.h"

/**
 * jack_bauer - This  prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * Return: 24 hour clock line by line
 */

void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(58);
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
