#include "main.h"
/**
 * _strlen - Entry point
 * @s: Description for n
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\n')
	{
		s++;
		i++;
	}
	return (i);
}
