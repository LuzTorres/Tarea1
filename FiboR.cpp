
#include <stdio.h>

long long int Fibonacci(long long int n)
{
	long long int a = 0, b = 1, c;
	if (n < 2)
	{
		return n;
	}
	for (int i = 1; i < n; ++i)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

long long int FibonacciR(long long int n)
{
	if (n < 2)
	{
		return n;
	}

	return FibonacciR(n - 2) + FibonacciR(n - 1);
}

int main()
{
	printf("%u\n",Fibonacci(10000000000000000000));
	printf("%u\n",FibonacciR(69));


	return 0;
}