#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _print_s(char *str);
int _numbers(long int n);
int _unsigned(unsigned int n);
int _print_hexa(unsigned long d);
int print_po(unsigned long a);
#endif
