#include "main.h"
/**
 * _memcpy -copies memory area.
 * @n: bytes from memory area
 * @src: to memory area
 * @dest: Returns a pointer to dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
