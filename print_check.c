#include "main.h"

/**
 * print_check - selects the right printing function
 * depending on the conversion specifier passed to _printf 
 * @s: character that holds the conversion specifier
 * prt[] to find a match between the specifier passed to _printf
 *and the first element of the struct, and then the approriate
 * printing function
 *Return: a pointer to the matching printing function
 */

int (*print_check(char s))(va_list)
{
	prt_f prt[] = {
	        {'i', print_int},
		{'c', print_char},
		{'d', print_int},
		{'s', print_string},
		{'\0', NULL},
	};
	int i;
	for (i = 0; i < 6; i++)
	  if (prt[i].c == s)
	    return (prt[i].f);
	return (NULL);
}
