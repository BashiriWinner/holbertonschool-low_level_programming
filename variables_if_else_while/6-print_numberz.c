#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * Description: this code for print text on screen
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int x = '0';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
