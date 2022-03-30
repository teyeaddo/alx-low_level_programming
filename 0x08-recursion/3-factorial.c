#include "main.h"

/**
 * factorial -this function returns the factorial of a number entered
 * @n: numbers whose factorial is to be returned
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
