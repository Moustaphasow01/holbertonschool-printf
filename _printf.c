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
  int (*pfunc)(va_list);
  const char *p;
  va_list lst;
  int count = 0;
  
  if (!format || !_strcmp(format, "%"))
    return (-1);
	va_start(lst, format);
	for (p = format; *p; p++)
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
		pfunc =print_check(*p);
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
	
