#include "main.h"

/**
* _memcpy - copy memor.
* @dest: copied
* @src: original
* @n: limit
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *b = src;
	char *c = dest;

	while (n != 0)
	{
	*c++ = *b++;
	n--;
	}

	return (dest);
}
