#include <stdio.h>

const int multiples(const int number1,const int number2,const int below)
{
	int sum = 0;
	for (int i = number1; i < below; i++)
		if (i % number1 == 0 || i % number2 == 0)
			sum += i;
	return sum;
}

int main(void)
{
	printf("The sum of all the multiples of 3 and 5 below 1000 is %d.\n",multiples(3,5,1000));
	return 0;
}
