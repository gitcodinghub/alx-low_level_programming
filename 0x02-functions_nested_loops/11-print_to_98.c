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
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--;
		}
		else if (n < 98)
		{
			n++;
		}
	}
	printf("%i\n", 98);
}
