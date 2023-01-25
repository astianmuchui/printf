#include "main.h"

/**
 * specifier_checker - checks the validity of a specifier and
 * assigns an appropriate function for its printing
 * @format: the specifier(char)
 *
 * Returns: a pointer to function
 */

int (*specifier_checker(const char *format))(va_list)
{
	int i;

	spec_o my_array[4] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_per},
		{NULL, NULL}};

	for (i = 0; my_array[i].o != NULL; i++)
	{
		if (*(my_array[i].o) == *format)
		{
			return (my_array[i].j);
		}
	}
	return (NULL);
}
