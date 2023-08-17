#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator used
 * @n: number of arguments
 *
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < ((int)n) ; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i != ((int)n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
