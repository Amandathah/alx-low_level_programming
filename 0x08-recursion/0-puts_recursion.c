#include "main.h"

/**
 * _puts_recursion - Prints a string followed by anew line
 * @s: the string to print
 *
 * Return : Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		return (s + 1);
	}
	else
	_putchar('\n');
}
