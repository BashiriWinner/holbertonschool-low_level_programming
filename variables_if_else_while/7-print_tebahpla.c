#include <stdio.h>
#include <stdlib.h>
/**
 *  main - Entry point
 *
 * Description: this code for print text on screen
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	char x = 'z';

	for (x = 'z'; x >= 'a'; x--)

		putchar (x);
	putchar ('\n');
	return (0);
}
