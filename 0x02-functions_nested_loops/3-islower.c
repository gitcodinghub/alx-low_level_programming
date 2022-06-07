#include "main.h"

/**
 * _islower - check if the letter is in lowercase
 *
 * 
 *
 * Return: nothing
 */
int _islower(int c)
{
	if(c >= 97 && c <= 122 || c >= 65 && c <=90)
		return 1;
	else
		return 0;
}
