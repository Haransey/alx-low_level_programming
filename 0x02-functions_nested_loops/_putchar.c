#include <unistd.h>

/**
 * main - main block
 * Description: Print the _putchar
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
