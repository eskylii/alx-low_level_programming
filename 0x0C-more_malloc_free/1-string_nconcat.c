#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *e;
	unsigned int x = 0, z = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		e = malloc(sizeof(char) * (l1 + n + 1));
	else
		e = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!e)
		return (NULL);

	while (x < l1)
	{
		e[x] = s1[x];
		x++;
	}

	while (n < l2 && x < (l1 + n))
		e[x++] = s2[z++];

	while (n >= l2 && x < (l1 + l2))
		e[x++] = s2[z++];

	e[x] = '\0';

	return (e);
}
