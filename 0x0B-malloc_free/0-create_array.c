#include "main.h"

#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of the memory to print
 * @c: character to print
 * Return: a pointer of array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
