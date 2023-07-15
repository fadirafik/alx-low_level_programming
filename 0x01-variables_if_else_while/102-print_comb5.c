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
	int ch, nu;
	int fj;
	int hm;
	int eo;
	int com;
	int sp;

	eo = '\n';
	sp = ' ';
	com = ',';
	for (ch = '0'; ch <= '9'; ch++)
	{
		for (nu = '0'; nu <= '9'; nu++)
		{
			for (fj = '0'; fj <= '9'; fj++)
			{
				for (hm = '0'; hm <= '9'; hm++)
				{
					if (hm == '9' && fj == '9' && nu == '9' && ch == '9')
						break;
					if (hm >= nu && fj >= ch)
					{
						putchar (ch);
						putchar (nu);
						putchar (sp);
						putchar (fj);
						putchar (hm);
					}
					else if (hm == '9' && fj == '9' && nu == '8' && ch == '9')
						break;
						putchar (com);
						putchar (sp);

				}
			}
		}
	}
	putchar (eo);
	return (0);
}
