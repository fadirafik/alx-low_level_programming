#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 24 ; i ++)
    {
        i = (char)i;
        putchar(i[0]);
        putchar(i[1]);
    }
}