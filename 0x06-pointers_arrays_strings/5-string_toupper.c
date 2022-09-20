#include "main.h"
/**
 * string_toupper - change every lowercase to uppercase
 * @n: pointer
 * Return: n 0 when successful
 */
char *string_toupper(char *n)
{
	int x;

	x = 0;
	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
			n[x] = n[x] - 32;
		x++;
	}
	return (n);
}
