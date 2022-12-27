#include <stdio.h>
/**
  * times_table - that prints the 9 times table
  * Return: Void
  */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				printf("%d,", i * j);
			}
			else
			{
				if (j != 9)
				{
					if (i * j < 10)
					{
						printf("  %d,", i * j);
					}
					else
					{
						printf(" %d,", i * j);
					}
				}
				else
				{
					if (i * j < 10)
					{
						printf("  %d", i * j);
					}
					else
					{
						printf(" %d", i * j);
					}
				}
			}
		}
		putchar('\n');
	}
}
