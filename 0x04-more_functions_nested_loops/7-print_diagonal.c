#include "main.h"

/**
 * print_diagonal - check the code
 * @n: numver of diagonals
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int y, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < y; x++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
