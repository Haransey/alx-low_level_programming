#include "main.h"

/**
 * swap_int -swap two integers
 * @n: pointer to n
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
