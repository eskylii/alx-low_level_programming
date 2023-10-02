#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int e;
	int s;

	e = 0;
	while (dest[e] != '\0')
	{
		e++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[e] = src[s];
		e++;
		s++;
	}

	dest[e] = '\0';
	return (dest);
}

