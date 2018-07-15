#include <stdio.h>

const int evenFib(const int max)
{
	int sum = 0;
	for (int prev = 0,present = 1, next = 1; present < max; present = next,next += prev,prev = present)
		if (next % 2 == 0)
			sum += next;
	return sum;
}

int main(void)
{
	printf("The sum of all the even numbers below 4 000 000 in the fibonacci serie is %d.\n",evenFib(4000000));
	return 0;
}
