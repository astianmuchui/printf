#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @formart: string to print

 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int result = 0;
	va_list ping;
	va_start(ping, format);
	int (*j)(va_list);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			count = write(1,&format[i],1);
			result = result + count;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			j = specifier_checker(&format[i + 1]);
			if (j != NULL)
			{
				count = j(ping);
				result = result + count;
				i = i + 2;
				continue;
		}
			if (format[i + 1] == '\0')
			{
				break;
			}
			
			if (format[i + 1] != '\0')
			{
				count = write(1,&format[i],1);
				result = result + count;
				i = i + 2;
				continue;
			}
		}
	}

	return (result);
}
