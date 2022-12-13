#include "main.h"

/**
 * _isalpha - this checks uppercase
 * @a:  input
 * Description- this is used to check the lowercase
 * Return: 1 if int a is uppercase or lowercase, 0 if otherwise
 */

int _isalpha(int a)
{
	if (((a >= 97)  && (a <= 122)) || ((a >= 65) && (a <= 90)))
		return (1);
	else
		return (0);
}
