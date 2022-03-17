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
