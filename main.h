#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

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

int print_int(va_list lst);
void print_number(int n);
int print_unsigned(va_list lst);
int count_digit(int i);

/**
* putchar an puts function
*/
int _putchar(char c);
int _puts(char *str);

int _strcmp(const char *s1, const char *s2);
#endif
