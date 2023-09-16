#ifndef _VARIADIC_H
#define _VARIADIC_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * fm_t - struct fm
 * @fm: pointer to char
 * @p: pointer to function
 * Return: none
 */
typedef struct fm
{
	char* fm;
	void (*p)(char *, va_list);
} fm_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
