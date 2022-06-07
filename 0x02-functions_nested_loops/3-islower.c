#include "main.h"

/**
 * _islower - check if the letter is in lowercase
 * @c: parameter 1
 * 
 *
 * Return: nothing
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
