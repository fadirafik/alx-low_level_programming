#include <stdio.h>

/*
* this is me mario
*/

/**
* main - prints the string putchar
* Return: Always 0 (success)
*/
int _putchar(char)
{
	int i;
	char f[] = "_putchar";

	i = 0;
	while (f[i] != '\0')
	{
		putchar(f[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
