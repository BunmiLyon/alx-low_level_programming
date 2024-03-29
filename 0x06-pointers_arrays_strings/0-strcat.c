#include "main.h"

/**
 * _strcat - Copy a string
 * @dest: Destination value
 * @src: Source value.
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
