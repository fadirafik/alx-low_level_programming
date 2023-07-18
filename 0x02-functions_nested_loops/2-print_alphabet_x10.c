#include "main.h"
#include <stdio.h>

/*
* this is me mario
*/

/**
* print_alphabet - prints the whole alphabet ten times
* Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        for (int c = 'a'; c<= 'z'; c++)
        {
            putchar(c);
        }
        putchar('\n');
    }
}