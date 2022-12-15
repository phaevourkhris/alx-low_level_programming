#include "main.h"
/**
 * print_times_table -prints the n times table, starting with 0
 * @n: number
 */

void print_times_tavle(int n)
{
	int a = 0, prod, b;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			prod = a * b;
			if (b == 0)
				_putchar('0' + prod);
			else if (prod < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (prod < 100)
			{
				_putchar(' ');
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}
			else
			{
				_putchar('0' + prod / 100);
				_putchar('0' + (prod - 100) / 10);
				_putchar('0' + prod % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
