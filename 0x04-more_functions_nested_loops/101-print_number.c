#include "main.h"
void print_integers(int m);

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
