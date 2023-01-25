#include "main.h"

/**
 * print_string - prints a string to stdout
 * @ping: variadic parameter
 * Return: an integer
 */

int print_string(va_list ping)
{
	int p;
	int result = 0;
	char *ptr;

	ptr = va_arg(ping, char *);
	if (ptr == NULL)
		return (-1);

	while (ptr[p])
	{
		result = (write, &ptr[p], 1);
		p = p + 1;
	}
	return (result);
}
