#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - new struct type defining a printer
 * @symbol: symbol representing a data type
 * @print - func pointer to funcs that take a va_list arg as a para.
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif
