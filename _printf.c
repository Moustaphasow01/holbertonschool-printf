#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the print_check() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into format
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
	{
	int (*pfunc)(va_list);
	const char *p;
	va_list lst;
	register int count = 0;
	va_start(lst, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			pfunc = print_check(*p);
			count += (pfunc)
				? pfunc(lst)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);}
			_putchar(-1);
			va_end(lst);
				return (count);
	}

			

