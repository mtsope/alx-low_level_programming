#include <stdio.h>

/**
 * main - Ponto de entrada
 * description: 'This program prints the alphabet in lowercase.'
 * Return: 0
 */

int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
