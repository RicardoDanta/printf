#include "main.h"
#define BUFFER_SIZE 1024
/**
* _printf - functions
* @format: format
* Return: 0
*/
int _printf(const char *format, ...)
{
	va_list lista;
	int pos = 0, i = 0, j;

	if (format)
	{
		va_start(lista, format);

		if (format == NULL || (format[0] == '%' && format[1] == '\0'))
				return (-1);
		if (lista == NULL)
			return (-1);

		for (j = 0; format[j] != '\0'; j++)

			if (!pos)
			{
				if (format[j] != '%')
					i += _putchar(format[j]);
				else
				{
					pos = 1;
				}
			}
			else
			{

				switch (format[j])
				{
						case 'c':
							i += _putchar(va_arg(lista, int));
							break;
						case 's':
							i += _print_s(va_arg(lista, char *));
							break;
						case '%':
							i += _putchar('%');
							break;
						case 'd':
							i += _numbers(va_arg(lista, int));
							break;
						case 'i':
							i += _numbers(va_arg(lista, int));
							break;
						case 'u':
							i += _unsigned(va_arg(lista, int));
							break;
						case 'b':
							i += _binary(va_arg(lista, int));
							break;
						default:
							i += _putchar('%');
							i += _putchar(format[j]);
				}
			pos = 0;
			}
		va_end(lista);
	}
	else
	{
		return (-1);
	}
	return (i);
}
