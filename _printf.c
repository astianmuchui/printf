#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

 /*
    * _printf - produces output according to a format
    * @format: character string
    * @params  format , number of arguments
    * return: number of characters printed
  */

int _printf(const char *format, ...)
{
va_list args;
int done;

va_start(args, format);
done = vfprintf(stdout, format, args);
va_end(args);

return (done);
}


int main(void)
{
int n, i = 42;
_printf("%d", n);
}

