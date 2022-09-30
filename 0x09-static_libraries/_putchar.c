#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 on success
 * On error, -1 id returned and errno is set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
