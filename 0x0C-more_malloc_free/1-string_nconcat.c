#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates n bytes of string to another string
 * @s1: append to string
 * @s2: concatenate string from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the final string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = 0, y = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;
	if (n < ln2)
		s = malloc(sizeof(char) * (ln1 + n + 1));
	else
		s = malloc(sizeof(char) * (ln1 + ln2 + 1));
	if (!s)
		return (NULL);
	while (x < ln1)
	{
		s[x] = s1[x];
		x++;
	}
	while (n < ln2 && x < (ln1 + n))
		s[x++] = s2[y++];
	while (n >= ln2 && x < (ln1 + ln2))
		s[x++] = s2[y++];
	s[x] = '\0';
	return (s);
}
