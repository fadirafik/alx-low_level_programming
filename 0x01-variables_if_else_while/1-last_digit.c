#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* authored by fadi haddad
*/

/*
* main - figures out if the last digit of a nuber 
* is greater or lesser than five and if it is 0
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
        int last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d ", n , last);
	if (last > 5)
		printf("and is greater than 5");
	else if (last == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0"); 

	return (0);
}
