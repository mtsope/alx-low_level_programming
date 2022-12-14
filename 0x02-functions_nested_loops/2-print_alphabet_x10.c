#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * description: 'Print the alphabet in lower'
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int cont = 0;

	while (cont < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		cont++;
		_putchar('\n');
	}
}

