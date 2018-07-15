#include <stdio.h>
#include <math.h>

const long int newPrime(const int oldPrime)
{
	int newPrimeNumber = oldPrime+1;
	for (int isPrime = 0; isPrime == 0;)
	{
		long int i = 2,end = 0;
		if (i > sqrt(newPrimeNumber))
			end = newPrimeNumber-1;
		else
			end = sqrt(newPrimeNumber);
		for (; i <= end; i++)
			if (newPrimeNumber % i == 0)
			{
				newPrimeNumber++;
				isPrime = 0;
				break;
			}
			else
				isPrime = 1;
	}
	return newPrimeNumber;
}


const long int prime(const int number)
{
	long int primeNumber = 2;
	for (int i = 1; i < number; i++)
		primeNumber = newPrime(primeNumber);
	return primeNumber;
}

int main(void)
{
	printf("10 001st prime number is %ld.\n",prime(10001));
	return 0;
}
