#include "main.h"
/**
 * print_last_digit - prints lat digit of a number
 * @n: number in question
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int x;
       
	x = n % 10;

	if (x < 0)
		x = x * -1;

	_putchar(x + '0');

	return (x);
}
