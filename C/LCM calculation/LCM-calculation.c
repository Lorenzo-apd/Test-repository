#include <stdio.h>
#include <stdlib.h>

/*
	This code calculates the LCM (Least Common Multiple) between two numbers and returns it in a printable format
	It works by calculating the GCD between the two numbers, and then using the formula LCM = (a*b)/GCD(a,b) to
	Calculate the Least Common Multiple of those two numbers.
*/

int a = 0;
int b = 0;
int lcm;

int GCD(int a, int b);	// define the GCD function

int main()
{
	// input the numbers that will be used to calculate the LCM
	printf("Input the values for the first number \n");
	scanf("%d", &a);
	printf("Input the values for the second number \n");
	scanf("%d", &b);

	// calculate the LCM by using the formula below
	lcm = (a*b)/GCD(a, b);
	
	// print the LCM value
	printf("The Least common multiple of %d and %d is %d", a, b, lcm);
	return 0;
}

GCD (int a, int b) {
// Returns the greatest common divisor (GCD) of two integers

int remainder;
int gcd;

if (a > b)
	{
		remainder = a % b;
		// If remainder is not zero, keep looping until it is
		if (remainder != 0)
		{
			while (remainder != 0)
			{
			gcd = remainder;
			remainder = a % remainder;
			}
		} else gcd = b;
		
	} else {
		remainder = b % a;
		// If remainder is not zero, keep looping until it is
		if (remainder != 0)
		{
			while (remainder != 0)
			{
			gcd = remainder;
			remainder = b % remainder;
			}
		} else gcd = a;
	}
	return gcd;	// Return the GCD
}