#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 *           c: char
 *           i: integer
 *           f: float
 *           s: char * (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
    unsigned int i = 0;
    char *str;
    va_list args;
    const char *sep = "";

    va_start(args, format);

    if (format == NULL)  /* Handle NULL format string */
    {
        printf("\n");
        va_end(args);
        return;
    }

    while (format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%s%c", sep, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", sep, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", sep, va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str)
                    printf("%s%s", sep, str);
                else
                    printf("%s(nil)", sep);
                break;
            default:
                break;
        }
        sep = ", ";
        i++;
    }
    
    printf("\n");
    va_end(args);
}

