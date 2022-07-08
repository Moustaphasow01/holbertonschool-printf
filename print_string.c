#include "main.h"

int _strlen(char *s) {
	int i = -1;

	if (s)
	{
		i = 0;
		while (s[i])
			i++;
	}
	return (i);
}


/**
 * print_string - loops through a string and prints
 * every character
 * @lst: va_list arguments from _printf
 * Return: number of char printed
 */
int print_string(va_list lst)
{
	int i = 0;
	char *s = va_arg(lst, char *);

	if (!s)
		s = "(null)";
	while (s[i])
		_putchar(s[i++]);
	return (i);
}
