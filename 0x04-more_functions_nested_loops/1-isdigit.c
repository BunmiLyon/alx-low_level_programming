#include "main.h"


/**
 * _isdigit - check the code
 * @c: variable to be treated
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
