#include "main.h"

/**
 * print_last_digit- prints the last digit of a number
 * @n: integer whichs last digit will be printed
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
