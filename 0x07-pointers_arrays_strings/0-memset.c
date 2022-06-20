#include "main.h"

/**
* _memset - memory .
* @s: pointer1
* @b: number
* @n: n bytes
* Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *u = (unsigned char *) s;

	while (n-- > 0x00)
	{
		*u++ = b;
	}
	return (s);
}

