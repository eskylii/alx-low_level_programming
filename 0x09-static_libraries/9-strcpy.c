#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int e = 0;
	int s = 0;

	while (*(src + e) != '\0')
	{
		e++;
	}
	for ( ; s < e ; s++)
	{
		dest[s] = src[s];
	}
	dest[e] = '\0';
	return (dest);
}

