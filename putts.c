#include "main.h"

/**
 * Putts - print to stdout
 * @putts: althernate to putchar
 * Returm: Always 0 succes
 */

int putts(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			putcharr(c[count]);
		}
	}
	return (count);
}

