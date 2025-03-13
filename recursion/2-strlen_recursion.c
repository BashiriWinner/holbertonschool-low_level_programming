#include "main.h"
/**
 * _strlen_recursion - check the code
 * @s: string
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\n')
	{
		return (1 + _strlen_recursion(char + 1));
	}
	return (0);
}
