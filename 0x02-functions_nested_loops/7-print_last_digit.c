#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: param 1
 *
 * Return: last digit of a number
 *
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar(n % 10);
	return (n % 10);
}
