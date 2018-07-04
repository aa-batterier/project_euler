/* This is not finished yet. */

#include <stdio.h>
#include <math.h>

const long int newPrime(const int oldPrime)
{
	int newPrimeNumber = oldPrime+1;
	for (int isPrime = 0; isPrime == 0;)
	{
		if (j > sqrt(newPrimeNumber))
		for (long int j = 2; j <= sqrt(newPrimeNumber); j++)
		{
			if (newPrimeNumber % j == 0)
			{
				newPrimeNumber++;
				isPrime = 0;
				break;
			}
			else
				isPrime = 1;
		}
	}
	return newPrimeNumber;
}


const long int prime(const int number)
{
	long int primeNumber = 2;
	for (int i = 1; i < number;)
	{
		primeNumber = newPrime(primeNumber);
		i++;
		printf("%d: %ld.\n",i,primeNumber);
	}
	return primeNumber;
}

int main(void)
{
	printf("10 001st prime number is %ld.\n",prime(10001));
	return 0;
}
