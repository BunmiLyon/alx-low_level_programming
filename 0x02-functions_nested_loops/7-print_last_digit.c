#include "main.h"

/**
 * print_last_digit - Computes the absolute value of an integer.
 * @n: The number to be computed.
 *
 * Return: Absolute value of number or zero
 */
int print_last_digit(int n)
{
	int lst;

	lst = n % 10;

	if (lst < 0)
	{
		lst = lst * -1;
	}
	_putchar(lst + '0');
	return (lst);
}
