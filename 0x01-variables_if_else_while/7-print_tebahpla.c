#include <stdio.h>

/**
 * main - Ponto de entrada
 * description: 'This program prints the alphabet in lowercase.'
 * Return: 0
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}

