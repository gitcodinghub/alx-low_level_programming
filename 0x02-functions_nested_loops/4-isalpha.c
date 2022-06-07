#include "main.h"

/**
 * _isalpha - letter or not
 * @c: parameter 1
 *
 * Return: nothing
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
