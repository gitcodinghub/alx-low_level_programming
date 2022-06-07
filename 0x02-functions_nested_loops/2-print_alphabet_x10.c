#include <main.h>

/**
 * print_alphabet_x10 - alphabet x 10
 *
 * 
 *
 * Return: nothing
 */
void print_alphabet_x10 (void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char j = 97; j <= 122; j++i)
			_putchar(j);
		_putchar('\n');
	}
}
