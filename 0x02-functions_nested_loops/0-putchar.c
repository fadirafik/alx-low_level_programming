#include <stdio.h>

/*
* this is me mario
*/

/**
* main - prints the string putchar
* Return: Always 0 (success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1))
}
