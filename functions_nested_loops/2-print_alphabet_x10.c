#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (a[i])
	{
		_putchar (a[i]);
		i++;
	}
}	
