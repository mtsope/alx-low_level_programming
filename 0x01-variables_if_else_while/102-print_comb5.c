#include <stdio.h>
/**
  * main -Entry point
  *
  * description: 'print possible combinations of two two-digit numbers'
  *
  * Return: 0
  */
int main(void)
{
	int i, x;

	for (i = 0; i < 99; i++)
	{
		for (x = 1; x < 100; x++)
		{
			if (i != x && i < x)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
				if (i + x != 197)
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
