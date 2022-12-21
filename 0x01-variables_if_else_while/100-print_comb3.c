#include <stdio.h>

/**
 * main - Entry point
 *
 * description: 'prints all possible different combinations of two digits.'
 *
 * Return: Success 0
	      */
int main(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != j && i < j)
			{
				putchar('0' + i);
				putchar('0' + j);

				if (i + j != 17)
				{

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
