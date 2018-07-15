#include <stdio.h>

const int palindrome(void)
{
	int largestPalindrome = 0;
	for (int number1 = 100; number1 < 1000; number1++)
		for (int number2 = 100; number2 < 1000; number2++)
		{
			const int product = number1 * number2;
			int reverse = 0;
			for (int n = product; n != 0; n /= 10)
				reverse = reverse * 10 + n % 10;
			if (reverse == product && reverse > largestPalindrome)
				largestPalindrome = reverse;
		}
	return largestPalindrome;
}

int main(void)
{
	printf("Largest palindrome made from the product of two 3-digit numbers is %d.\n",palindrome());
	return 0;
}
