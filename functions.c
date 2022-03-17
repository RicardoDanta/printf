#include <unistd.h>
#include "main.h"
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
* _print_s - print a string
* @str: pointer of string
* Return: i
*/
int _print_s(char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";
	if (str)
	{
		while (str[i] != '\0')
		{
		i++;
		_putchar(str[i - 1]);
		}
	}
	return (i);
}
/**
* _numbers - print numbers
* @n: integer
* Return: numbers
*/
int _numbers(long int n)
{
	int p = 0;
	long int e = n;

	if (n)
	{
		if (e < 0)
		{
			p += _putchar('-');
			e = -e;
		}
		if ((e / 10) > 0)
		{
			p += _numbers(e / 10);
		}
		p += _putchar((e % 10) + '0');
	}
	else
		p += _putchar(n + '0');
	return (p);
}
/**
* _unsigned - print numbers
* @n: integer
* Return: numbers
*/
int _unsigned(unsigned int n)
{
	int p = 0;
	unsigned int e = n;

	if (n)
	{
		if ((e / 10) > 0)
		{
			p += _numbers(e / 10);
		}
		p += _putchar((e % 10) + '0');
	}
		else
			p += _putchar(n + '0');
	return (p);
}

/**
* print_binary - print numbers to binary
* @arg: arguments to print.
* Return: number of prirnts
*/
int print_binary(unsigned arg)
{
	char *str;
	unsigned int i, auxi = 0, num, cont;

	num = arg;
	i = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (i > 0)
	{
		i /= 2;
		auxi++;
	}
	cont = auxi;
	str = malloc(auxi * sizeof(char) + 1);
	if (str == NULL)
		return (-1);
	auxi = 0;
	while (num > 0)
	{
		str[auxi] = (num % 2) + '0';
		num /= 2;
		auxi++;
	}
	while (auxi != 0)
	{
		auxi--;
		_putchar(str[auxi]);
	}
	free(str);
	return (cont);
}
