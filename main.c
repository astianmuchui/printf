#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - test file
 * Program starts from here
 * Return: 0
 */

int main(void)
{
	int cnt_standrd = 0;
	int cnt_homemd = 0;
	write(1,"STANDARD:\n",10);
	cnt_standrd = printf("My name starts with %c\n", 'F');
	printf("The characters are %d\n", cnt_standrd);

	write(1,"________________________\n",25);

	write(1,"HOME_MADE:\n",11);
	cnt_homemd = _printf("My name starts with %c\n", 'F');
	printf("The characters are %d\n", cnt_homemd);

	return (0);
}
