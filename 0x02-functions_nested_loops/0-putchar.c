#include <stdio.h>

/*
* this is me mario
*/

/**
* main - prints the string putchar
* Return: Always 0 (success)
*/
int main(void)
{
	int i;
	char f[] = "_putchar";

	i = 0;
	while (f[i] != '\0')
	{
		putchar(f[i]);
		i++;
	}
	putchar('\0');
	putchar('\n');
	return (0);
}
