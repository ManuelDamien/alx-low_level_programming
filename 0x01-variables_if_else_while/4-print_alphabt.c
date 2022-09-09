#include <stdio.h>
/**
 * main - program execution point
 * Return: 0 when successful
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q')
			continue;
		else if (letter == 'e')
			continue;
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
