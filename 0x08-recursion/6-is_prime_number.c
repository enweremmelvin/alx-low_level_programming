/**
 * is_prime_number - check if a number is a prime number
 *
 * @n: number to be checked
 * @divide: number to divide n by
 *
 * Return: return 1 if n is prime, 0 otherwise
 */

int prime_check(int num, int divide);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_check(n, 2));
}

int prime_check(int num, int divide)
{
	if (divide < num)
	{
		if (num % divide == 0)
			return (0);

		if (divide == num / 2)
			return (1);
	}

	return (prime_check(num, divide + 1));
}
