#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*declare variables to hold data types*/
	int cs = sizeof(char);
	int is = sizeof(int);
	int ls = sizeof(long);
	int lls = sizeof(long long);
	int fs = sizeof(float);

	printf("%d\n%d\n%d\n%d\n%d\n", cs, is, ls, lls, fs);
	return (0);
}
