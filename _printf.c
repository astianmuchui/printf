#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

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
