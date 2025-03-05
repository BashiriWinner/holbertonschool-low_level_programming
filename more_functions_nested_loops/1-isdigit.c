#include "main.h"
/**
 * _isdigit - this function test is digit or not
 *
 * @c: var
 *
 * Return: zero
 */

int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
