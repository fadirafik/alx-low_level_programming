#include <stdio.h>

int main(void)
{
    int length = 0;
    int po;
    int i;
    unsigned int sum = 0;
    char *b = "1111";

    if (b == NULL)
        return (0);

    while (*b)
    {
        length++;
        b++;
    }

    po =1;

    for (i = 0; i < length; i++)
    {
        if (b[i] != '0' && b[i] != '1')
			return (0);
        if (b[i] == '1')
        {
            sum += po;
        }
        po *= 2;
    }
    
    printf("%d",sum);
}