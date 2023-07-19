#include <stdio.h>

void main(void)
{
	int i;
	int j;
    int k;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
            k = j*i;
            if (k < 10)
            {
                putchar(k + '0');
            }                    
            else
            {    
                putchar((k / 10) + '0');
                putchar((k % 10) + '0');
            }
            if (j != 9)
            {
                putchar(' ');
                putchar(' ');
                putchar(',');            
            }	
	}
        putchar('\n');
	}
}
