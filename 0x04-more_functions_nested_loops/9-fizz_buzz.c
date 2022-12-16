#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the number from 1 to 100
 * 3 multiples Fizz instead of the number
 * 5 print Buzz instead of number
 * 3 & 5 print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%5", b[]);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%5", fb[]);
		else if (i % 3 == 0)
			printf("%5", f[]);
		else if (i % 5 == 0)
			printf("%5", b[]);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
