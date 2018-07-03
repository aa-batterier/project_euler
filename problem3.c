#include <stdio.h>
#include <math.h>

const long int largestPrimeFactor(long int number)
{
	for (long int i = 2; i <= sqrt((double)number); i++)
		if (number % i == 0)
		{
			number /= i;
			i = 2;
		}
	return number;
}

int main(void)
{
	printf("600851475143 largest prime factor is %ld.\n",largestPrimeFactor(600851475143));
	return 0;
}
