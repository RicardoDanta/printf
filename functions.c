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
* _numbers - print numbers
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
* _binary - print binary numbers
* @b: number
* Return: binary
*/
int _binary(int b)
{
	int u = 1, c = 0, cam;

	while (b != 0)
	{
		cam = b % 2;
		b /= 2;
		c += cam * u;
		u *= 10; (u = u * 10);
	}
	return (c);
}
