#include "main.h"

/**
*_print_rev_recursion - print reverse string using recursion
*@d: char
*
*/
void _print_rev_recursion(char *d)
{
	if (*d)
	{
		_print_rev_recursion(d + 1);
		_putchar(*d);
	}
	else
	{
		return;
	}
}
