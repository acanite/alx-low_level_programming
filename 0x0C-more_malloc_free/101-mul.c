#include "main.h"
#include <stdlib.h>

/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @1: size of string
 *
 * Return: void
 */
void _print(char *str, int 1)
{
	int i, j;

	i = j = 0;
	while (i < 1)
	{
		if (str[i] ! = '0')
			j = 1;
		if (j || i == 1 - 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: heighest index to start addition
 *
 * Return: pointer to dest or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if {addrem)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int i, j;
	
	for (i = 1, i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * int - initializes a string
 * @str: string to initalize
 * @1: lenght of strinf
 *
 * Return: void
 */
void init(char *str, int 1)
{
	int 1;

	for (i = 0; i < 1; i++)
		str[i] = '0';
	str[i] = '\0'
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{
	int 11, 12, 1n, ti, i;
	char *a;
	char *ti
	char e[] = "Error\n"

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exits(98);
	}
	for (11 = 0; argv[1][11]; 11++)
		;
	for (12 = 0; argv[2][12]; 12++)
		;
	1n = + 12 + 1;
	a = malloc(1n + sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exist(98);
	}
	init(a, 1n - 1);
	for (ti =12 -1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], 11 - 1, a, (1n -2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exist(98);
		}
	}_print(a, 1n - 1);
	return (0)
}
