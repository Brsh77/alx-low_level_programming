#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * This function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * And then adds a terminating null byte
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	char *cpy;

	for (; dest[len] != '\0'; len++)
		;

	cpy = dest + len;
	while (*src != '\0')
		*cpy++ = *src++;
	*cpy = '\0';

	return (dest);
}
