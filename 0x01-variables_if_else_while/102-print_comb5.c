#include <stdio.h>

/**
 * main - Prints all possible combination of two two-digits numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, g, e, b, d;

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (g = 48; d < 57; g++)
			{
				for (e = 48; e < 57; e++)
				{
					b = (e * 10) + g;
					d = (j * 10) + g;
					if (b < d)
					{
						putchar(e);
						putchar(g);
						putchar(' ');
						putchar(j);
						putchar(i);
						if (i != 48 || j != 48)
							break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
