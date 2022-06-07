#include "main.h"

/**
 * main - entry point
 * print_alphabet - prints alphabet
 *
 * Description: Prints alphabet in lowercase then new line
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}

