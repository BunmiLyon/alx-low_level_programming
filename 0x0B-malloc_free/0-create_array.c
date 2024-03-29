#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * @size: size of the array
 * @c: character
 * Return: r
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(c));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
