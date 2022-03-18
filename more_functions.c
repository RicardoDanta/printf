#include "main.h"
/**
* print_octal - prints decimal numbers into octal base.
* @number: number to print.
* Return: conta octal.
*/
int _print_octal(unsigned int number)
{
	char *str;
	unsigned int n = 0, r = 0, a = 0, conta = 0;

	r = number;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	while (r > 0)
	{
		a++;
		r /= 8;
	}
	str = malloc(a * sizeof(char) + 1);

	if (str == NULL)
	{
		return (-1);
	}

	while (number > 0)
	{
		str[n] = (number % 8) + '0';
		number /= 8;
		n++;
	}

	while (n != 0)
		{
		n--;
		_putchar(str[n]);
		conta++;
	}
	free(str);
	return (conta);
}
/**

*print_rot13 - print string in rot13
*@n: cambiar rot 13
*Return: 0 if success.

int _rot13(int n)
{
	int g, a, conta = 0;
	char *str = 0;
	char norma[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (g = 0; str[g] ; g++)
	{
		n = 0;
		for (a = 0; norma[a] && !n; a++)
		{
			if (str[g] == rot[a])
			{
				_putchar(rot[a]);
				conta++;
				n = 1;
			}
		}
		if (!n)
		{
			_putchar(str[g]);
			conta++;
		}
	}
	return (conta);
}
*/
/**
* print_rev - print a string reverse
* @cad: string.
* Return: 0 if success.

int print_rev(int cad)
{

	int conta = 0;
	char *str;

	while (str[conta + 1])
	{
		cad++;
	}

	for (conta = cad - 1; conta >= 0; conta--)
	{
		_putchar(str[conta]);
	}
	return (cad);
}
*/
