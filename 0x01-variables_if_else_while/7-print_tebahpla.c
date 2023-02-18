#include <stdio.h>


/**
 * main - prints lowercase alphabets in reverse order
 *
 * Return: 0
 */


int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);	
}
