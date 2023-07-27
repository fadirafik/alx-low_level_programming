#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1;
    char *s = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";


	while (s[i] != '\0')
	{
		if (s[i - 1] < 65 || s[i - 1] > 122)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] =  s[i] - 32;
				i++;
			}
			else
			{
				s[i] = s[i];
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	s[i] = '\0';
    printf("%s", s);
}