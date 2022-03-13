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

	while (str[i] != '\0') 
	{
		i++;
		_putchar(str[i - 1]);
	}

return (i);
}
