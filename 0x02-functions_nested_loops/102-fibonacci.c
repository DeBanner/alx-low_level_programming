#include <stdio.h>
/**
 * main - main block
 * Description: computes first 100 fibonacci numbers
 * 5 below 1024, followed by a new line
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 21000000000)
	{
		next = a + b;
		a = b;
		b = next;
		sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
