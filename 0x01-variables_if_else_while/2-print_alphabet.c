#include <stdio.h>

/**
 * main - Ponto de entrada
 * description: 'This program prints the alphabet in lowercase.'
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
