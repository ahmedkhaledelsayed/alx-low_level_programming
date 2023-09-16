#ifndef _VARIADIC_H
#define _VARIADIC_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct token - struct fm
 * @token: pointer to char
 * @f: pointer to function
 * Return: none
 */
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
