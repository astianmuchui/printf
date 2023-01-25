#include "main.h"

/**
 * print_per - prints a character % to stdout
 * @ping: variadic parameter
 * Return: an integer
 */

int print_per(va_list ping)
{
	(void)ping;

	write(1, "%", 1);

	return (1);
}
