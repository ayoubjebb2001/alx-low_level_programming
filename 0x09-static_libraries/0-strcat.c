#include "main.h"
/**
 * strcat - Concatenates the string pointed to by @src,
 *  including the terminating null byte, to the end of
 *  the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	for (i = 0; dest[i] != '0'; i++)
		len++;
	for (i = 0; src[i]; i++)
		dest[len++] = src[i];
	return (dest);
}
