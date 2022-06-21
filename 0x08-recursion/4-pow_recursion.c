#include "main.h"

/**
* _pow_recursion - value of a^b
* @a: number
* @b: number
* Return: a^b
*/
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	else  if (b > 0)
	{
		int tmpY = b - 1;

		return (a * _pow_recursion(a, (tmpY)));
	}
	else
		return (1);
}
