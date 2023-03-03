#include "main.h"

/**
 *_strncpy - function that copies a string
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int y;

	for (y = 0; y < n && *(src + y); y++)
	{
		*(dest + y) = *(src + y);
	}
	for (; y < n; y++)
	{
	*(dest + y) = '\0';
	}
	return (dest);

}
