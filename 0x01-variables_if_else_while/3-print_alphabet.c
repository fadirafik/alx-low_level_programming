#include <stdio.h>
/*
* this is me mario
*/

/**
* main - prints the whole alphabet
* Return: Always 0 (success)
*/
int main(void)
{
char ch;
char eo;
eo = '\n';

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar (ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar (ch);
}
putchar (eo);
return (0);
}
