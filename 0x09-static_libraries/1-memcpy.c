#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory
 * area dest
 * @dest: src to copy to
 * @src: src to copy from
 * @n: bytes to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

