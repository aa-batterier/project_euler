#include <stdio.h>

const int diffSquares(const int start,const int stop)
{
	int sumOfSquares = 0,squareOfSum = 0;
	for (int i = start; i <= stop; i++)
	{
		sumOfSquares += i * i;
		squareOfSum += i;
	}
	return squareOfSum * squareOfSum - sumOfSquares;
}

int main(void)
{
	printf("Difference is %d.\n",diffSquares(1,100));
	return 0;
}
