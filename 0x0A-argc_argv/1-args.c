#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the argument.
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
