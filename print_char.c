#include "main.h"

/**
 * print_char - prints a character to stdout
 * @ping: variadic parameter
 * Return: an integer
 */

int print_char(va_list ping)
{
	char c = va_arg(ping, int);
	int result = 0;

	if (c)
	{
		result = write(1, &c, 1);
		return (result);
	}
	return (0);
}
