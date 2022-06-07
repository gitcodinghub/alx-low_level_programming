#include "main.h"

/**
 * _abs - Determines whether an integer is positive, negative or zero.
 * @n: param 1
 * 
 *
 * Return: resturns absolute value of a number
 *
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
