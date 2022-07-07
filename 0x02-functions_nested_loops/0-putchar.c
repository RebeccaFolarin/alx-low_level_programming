#include "main.h"

/**
 * main - prints "putchar"
 * Return: 0
 */
int main(void)
{
	char putchar[] = "putchar";
	int i = 0;

	while (putchar [i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

