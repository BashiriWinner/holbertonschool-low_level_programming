#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_10x(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (a[i])
	{
		_putchar (a[i]);
		i++;
	}
}
