#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/**
* struct fmt - Struct op
*
* @fmt: The format.
* @fn: The function associated.
*/
struct fmt
{
char fmt;
int (*fn)(va_list, char[], int, int, int, int);
};


/**
* typedef struct fmt fmt_t - Struct op
*
* @fmt: The format.
* @fm_t: The function associated.
*/
typedef struct fmt fmt_t;

int _printf(const char *format, ...);




#endif /* MAIN_H */
