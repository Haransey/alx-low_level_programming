#include "main.h"

/**
 * _islower - this checks lowercase
 * @a:  input
 * Description- this is used to check the lowercase
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int _islower(int a)
{
	if (a >= 97  && a <= 122)
		return (1);
	else
		return (0);
}
