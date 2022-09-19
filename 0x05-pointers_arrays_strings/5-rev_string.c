#include "main.h"
/**
 * rev_string - string reverse
 * @s: Input string
 * Return: 0 when successful
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int counter = 0;
	int x;

	while (s[counter] != '\0')
		counter++;
	for (x = 0; x < counter; x++)
	{
		counter--;
		reverse = s[x];
		s[x] = s[counter];
		s[counter] = reverse;
	}
}


