#include "main.h"

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
/**
 * find_len - finds the length of a string
 * @str: the string measured
 * Return: The length of the string
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * create_xarray -  creates array of chars and initializes with the
 * character 'x'. Adds a terminating null byte
 * @size: the array size to be initialized
 * Description: where there is insufficient sapce, the function will
 * exit with a 98 status
 * Return: A pointer to the array
 */
char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		exit(98);
	for (index = 0; index < (size - 1); index ++)
		array[index] = 'x';
	array[index] = '\0';
	return (array);
}
