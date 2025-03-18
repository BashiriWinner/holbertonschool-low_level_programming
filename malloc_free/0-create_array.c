#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 *
 * @size: size of array
 * @c: char
 *
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	return (NULL);

	str = malloc(size * sizeof(char));
	if (!str)
	return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
