#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'a':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'b':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'c':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 'd':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					x++;
					continue;
			}
			sep = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}
