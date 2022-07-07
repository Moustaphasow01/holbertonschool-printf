#include "main.h"

/**
 *_printf - produces output according to a format
 *@format: format string containing the characters and the specifiers 
 * this function will call the print_check() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into format
 * Return: length of the output 
 */

int _printf(const char *format, ...)
{

  if (!fmt || !_strcmp(fmt, "%"))
    return (-1);
  unsigned int (*pfunc)(va_list);
  const char *p;
  int count = 0;
	va_list lst;

	va_start(lst, format);
	for (p = fmt; *p; p++)
	  {
	    if (*p == '%')
	      {
		p++;
		if (*p == '%')
		  {
		    _putchar('%');
		    count++;
		    continue;
		  }
		pfunc = get_print(*p);
		if (!pfunc)
		  {
		    _putchar('%');
		    _putchar(*p);
		    count += 2;
		  } else
		  count += pfunc(lst);
	      } else
	      {
		count++;
		_putchar(*p);
	      }
	  }
	va_end(lst);
	return (count);
}
	
