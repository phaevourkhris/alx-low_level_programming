#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int y;

	int z = 0;

	while (z < 10)
	{
		y = 0;
		while (y < 10)
		{
			if (z != y && z < y)
			{
				putchar('0' + z);
				putchar('0' + y);

				if (y + z != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		z++;
	}
	putchar('\n');
	return (0);
}
