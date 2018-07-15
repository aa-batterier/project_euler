#include <stdio.h>

const int withoutRemainder(const int start,const int stop)
{
	int smallest = stop;
	for (int i = start; i <= stop; i++)
		if (smallest % i != 0)
		{
			smallest += stop;
			i = start;
			continue;
		}
	return smallest;
}

int main(void)
{
	printf("Smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is %d.\n",withoutRemainder(1,20));
	return 0;
}
