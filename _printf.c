#include "main.h"

/**
 * printf -  creating printf from scratch
 *
 * Return: Always 0 success
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0, string_c;

	va_list args;

	va_start(args, format);
	for(i = 0; format[i] != '\0'; i++)
	{
		if(format[i] != '%')
		{
			putcharr(format[i]);
			i++;
		}
		else if(format[i + 1] == 'c')
		{
			putcharr(va_arg(args, int));
			i++;
		}
		else if(format[i + 1] == '%')
		{
			putcharr('%');
			i++;
		}
		else if(format[i + 1] == 's')
		{
			string_c = putts(va_arg(args, char *));
			i++;
			count = string_c;
		}
		count++;
	}
	va_end(args);
	return (count);
}

