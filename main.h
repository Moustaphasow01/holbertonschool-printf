#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * printf
 */
int _printf(const char *format, ...);
int (*print_check(char s))();

int print_char(va_list lst);
int print_string(va_list lst);

/**
* print_num
*/

int print_int(va_list l);
void print_number(int n);
int count_digit(int i);

/**
* putchar an puts function
*/
int _putchar(char c);
int _puts(char *str);

/**
 * struct print_function - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct print_function
{
	char c;
	int (*f)(va_list a);
} prt_f;

int _strcmp(const char *s1, const char *s2);
#endif
