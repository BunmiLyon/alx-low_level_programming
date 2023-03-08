#include "main.h"

/**
 * factorial - funcction
 * @n: number
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
	
}
