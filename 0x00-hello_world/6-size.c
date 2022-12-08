#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*declare variables to hold data types*/
	int char_size = sizeof(char);
	int int_size = sizeof(int);
	int long_size = sizeof(long);
	int long_long_size = sizeof(long long);
	int float_size = sizeof(float);

	printf("%d\n%d\n%d\n%d\n%d\n", char_size, int_size, long_size, long_long_size, float_size);
	return (0);
}
