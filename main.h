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
int print_binary(unsigned arg);
int print_rev(int cad);
int _print_octal(unsigned int number);
int _rot13(char *str);
#endif
