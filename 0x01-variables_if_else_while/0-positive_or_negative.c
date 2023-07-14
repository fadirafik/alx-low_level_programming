#include <stdlib.h>
#include <time.h>
/*
* fadi haddad
*/

/**
* main - this is main that checks if nuber is positive
* or negative or zero
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");
	return (0);
}
