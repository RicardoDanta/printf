#include "main.h"

/**
* _print_hexa_e - number in Hexa.
* @d: Number print in Hexa.
* @c: This variable set the case of the output (0 =LowerCase and 1 =UpperCase).
* Return: Con
**/
int _print_hexa_e(unsigned long d)
{
        int r = 0, con = 0, rest;
        char h[100];

	if (d == 0)
	{
		_putchar('0');
		return (1);
        }
	while (d / 16)
	{
		rest = d % 16;
		if (rest < 10)
			rest = rest + 48;
		else
			rest = rest + 87;
		h[r] = rest;
		r++;
		d = d / 16;
	}
	for (r = r - 1; r >= 0; r--)
	{
		_putchar(h[r]);
		con++;
	}
	return (con);
}

/**
* _print_po - print address
* @a: list
* Return: count
**/

int print_po(unsigned long a)
{
	unsigned long n = a;
	int cont = 0;
	
	if (n == 0)
	{
		return (_printf("(nil)"));
	}
	cont += _putchar('0');
	cont += _putchar('x');

	cont += _print_hexa_e(n);
	return (cont);
}
/**
*_print_h - prints mem address
*@p: list
*Return: Char quantity.
**/

int _print_h(unsigned long p)
{
	unsigned long n = p;
	int cont = 0;

	if (n == 0)
	{
	return (_printf("(nil)"));
	}
	cont += _putchar('0');
	cont += _putchar('x');
	
	cont += _print_hexa_e(n);
	return (cont);



}
