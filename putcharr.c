#include "main.h"

/**
 * putcharr - using putchar to print character
 *@c: char imput- alternate to printf
 * Return: Always 1 success
 *
 */
int putcharr(char c)
{
	return (write(1, &c, 1));
}
