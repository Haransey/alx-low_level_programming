#include "main.h"

/**
 * swap_int -swap two integers
 * @a: pointer to a to be swap
 * @b: pointer to b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
