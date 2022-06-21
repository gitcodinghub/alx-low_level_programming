#include "main.h"

/**
*_strlen_recursion - know length
*@d: char
*
*Return: size
*/
int _strlen_recursion(char *d)
{
	if (!*d)
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(d + 1) + 1);
	}
}
