#include "main.h"

/**
 * rev_string - to reverse a string
 * @s: The string to be modified
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, c, l;
	char h;

	for (i = 0; s[i] != '\0'; i++)
		;
	l = i;
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
