#include <stdio.h>

/**
 * print_to_98 - function
 * @n: param 1
 *
 * Return: returns nothing
 *
 */
void print_to_98(int n)
{
	if ( n > 98 )
	{
		for (; n >= 99; n--)
			printf("%d, ",n);
		printf("%d",98);
	}
	else
	{
		if (n < 1 )
			n = 1;
		for (; n <= 97; n++)
			printf("%d, ",n);
		printf("%d",98);
	}
}
