#include "main.h"
/**
* _puts_recursion - check the code
* @s: string
* Return: Always 0
*/
void _puts_recursion(char *s)
{
if(*s == '\0')
{
_putchar("\0");
return;
}
else
{
_putchar(*s);
s++;
_puts_recursion(s);
}
}
