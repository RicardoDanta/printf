#include "main.h"
/**
* _printf - functions
* @format: format
*/
int _printf(const char *format, ...)
{
	va_list lista;
	int pos = 0;
	int i = 0;
	int par = 0;
	int j;

	if (format)
	{
		va_start(lista, format);

		for (j = 0; format[j] != '\0'; j++)
			
			if (!pos)
			{	
				if (format[j] != '%')
				{	
					i += _putchar(format[j]);
				}
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
				}
			pos = 0;	
			}
		va_end(lista);
	}

				return (i);
}
