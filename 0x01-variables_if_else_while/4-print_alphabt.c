#include <stdio.h>

/**
 * main - Ponto de entrada
 * description: 'This program prints the alphabet in lowercase.'
 * Return: 0
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		}
		lowercase++;
	}
		putchar('\n');
		return (0);
}
