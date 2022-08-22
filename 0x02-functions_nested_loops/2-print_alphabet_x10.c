#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char 1;
	int out;

	out = 0;

	while (out <= 9)
	{
		1 = 'a';
		while (1 <= 'z')
		{
			_putchar(1);
			1++;
		}
		_putchar('\n');
		out++;
	}
}
