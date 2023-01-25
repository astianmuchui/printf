#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>


int _printf(const char *format, ...);
int (*specifier_checker(const char*))(va_list);

/**
 * stuct spec - struct for specifiers to printer
 * @o: character to compare
 * @j: function to handle printing
 */
typedef struct spec
{
	char *o;
	int (*j)(va_list);
}spec_o;

int print_char(va_list);
int print_string(va_list);
int print_per(va_list);

int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_b(va_list args);
int print_u(va_list args);
int print_o(va_list args);
int print_x(va_list args);
int print_X(va_list args);
int print_S(va_list args);
int _printf(const char *format, ...);

#endif
