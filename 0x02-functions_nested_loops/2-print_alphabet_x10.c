#include <main.h>

/**
 * main - entry point
 *
 * Description: Prints 
 *
 * Return: 0
 */
void print_alphabet_x10 (void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char j = 97; j <= 122; j++)
			_putchar(j);
		_putchar('\n');
	}
}
