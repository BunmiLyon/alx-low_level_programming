#include "main.h"
/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char aux;

	while (s[i] != '\0')
		i++;
	while (j < i--)
	{
		aux = s[j];
		s[j++] = s[i];
		s[i] = aux;
	}
}
