#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	long long int c;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu  byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
