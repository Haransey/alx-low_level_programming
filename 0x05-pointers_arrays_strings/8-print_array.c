#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints array of integers
 *
 * @a: Array of integers
 * @n: Number of elements of the array
 *
 * Return: void
 **/

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
