#include "main.h"


/**
 * factorial - Function that return the factorial of a given number
 * @n: number to return the facrtorial number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
