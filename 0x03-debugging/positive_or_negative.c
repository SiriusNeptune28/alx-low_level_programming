#include "main.h"

/**
 * main - print either the value is positive_or_negative.c
 * Return: Always 0
 */
int main(void)
{
	int i;

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
	return (0);
}
