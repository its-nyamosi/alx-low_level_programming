#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @a: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int a, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, a);

	for (index = 0; index < a; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (a - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
