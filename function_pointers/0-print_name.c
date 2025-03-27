#ifndef "function_pointers.h"
#define "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: name of pointer
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
