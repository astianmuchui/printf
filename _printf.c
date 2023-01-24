
#include <stdio.h>
#include <stdarg.h>
#include <string.h>


    /*
        @params: format, unlimited number of characters to be printed
    */

int _printf ( const char *format , ...  )
{
    va_list args;
    int i;

    va_start ( args, format );
    i = vprintf ( format , args );

    va_end(args);

    return i;
}


int main( void )
{
    // _printf ( "%d",500 );
}
