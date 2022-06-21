#include "main.h"

/**
*_puts_recursion - print string using recursion
*@d: char;
*
*/
void _puts_recursion(char *d)
{
	if (*d)
	{
		_putchar(*d);
		_puts_recursion(d + 1);
	}
	else if (!*d)
	{
		_putchar('\n');
		return;
	}
}
