#include "main.h"

/**
 * *_memcpy - copies the memory area
 * @dest: the destination memory area
 * @src: the memory area to copy from
 * @n: the number of bytes to copy
 *
 * Return: pointer to the destination
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
