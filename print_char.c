#include "main.h"

/**
 * print_char - prints a character
 * @lst: va_list arguments from _printf
 * Return: number of char printed
 */
int print_char(va_list lst)
{
	_putchar(va_arg(lst, int));
	return (1);
}
