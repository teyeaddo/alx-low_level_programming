#include "main.h"

/**
 * print_sign- prints the sign of a number
 * @n: is the integer to be tested
 * Return: 1 if n is greater than zero
 * 0 if n is zero
 * -1 and if n is less than z
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
