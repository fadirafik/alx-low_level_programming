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
	int ch;
    int eo;

    eo = '\n';
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar (ch);
	}
    putchar (eo);
	return (0);
}
