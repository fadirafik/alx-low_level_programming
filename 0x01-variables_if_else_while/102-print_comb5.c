#include <stdio.h>
/*
* this is me mario
*/

/**
* main - prints the whole decimal numbers
* Return: Always 0 (success)
*/
int main(void)
{
	int ch, nu, fj, hm, bp;

	bp = 0;
	for (ch = '0'; ch <= '9'; ch++)
	{
		for (nu = '0'; nu <= '9'; nu++)
		{
			for (fj = '0'; fj <= '9'; fj++)
			{
				for (hm = '0'; hm <= '9'; hm++)
				{
					if (fj > ch)
						bp = 1;
					else if (fj == ch && hm > nu)
						bp = 1;
					if (bp == 1)
					{
						putchar (ch);
						putchar (nu);
						putchar (' ');
						putchar (fj);
						putchar (hm);
					}
					if (hm == '9' && fj == '9' && nu == '8' && ch == '9')
					{
						putchar ('\n');
						return (0);
					}
					if (bp == 1)
					{
						putchar (',');
						putchar (' ');
					}
					bp = 0;
				}
			}
		}
	}
	return (0);
}
