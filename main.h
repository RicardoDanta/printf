#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#define BUFFER_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int _print_s(char *str);
int _numbers(long int n);
#endif
