#include <stdio.h>
/*
* this is me mario
*/

/**
* main - prints the whole alphabet except e and q
* Return: Always 0 (success)
*/
int main(void)
{
	char ch;
	char eo;
	eo = '\n';

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar (ch);
	}
	putchar (eo);
	return (0);
}
