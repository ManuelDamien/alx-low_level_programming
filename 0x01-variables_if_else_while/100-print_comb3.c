#include <stdio.h>
/**
 * main - program execution stage
 * printing two d/t digits in ascending order and separated by comma
 * followed by a space
 * Return: 0 when successful
 */
int main(void)
{
int dig1;
int dig2;

for (dig1 = 0; dig1 < 9; dig1++)
{
for (dig2 = dig1 + 1; dig2 < 10; dig2++)
{
putchar((dig1 % 10) + '0');
putchar((dig2 % 10) + '0');
if (dig1 == 8 && dig2 == 9)
continue;
putchar(',');
putchar(' ');		}
}
putchar('\n');
return (0);
}
