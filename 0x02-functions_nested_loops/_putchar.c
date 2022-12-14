#include <unistd.h>

/**
 * _putchar -print character c to stdouy
 * Return: 1 (sucess)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
