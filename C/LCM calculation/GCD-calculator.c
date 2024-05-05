#include <stdio.h>
#include <stdlib.h>

// this code was created to test out the GCD function for the LCM calculation code

int a = 0;
int b = 0;
int c = 0;

// define the GCD function
int GCD(int a, int b);

int main() {

// input the numbers that we will be using to test out the GCD function
	printf("Input the values for the first number");
	scanf("%d", &a);
	printf("Input the values for the second number");
	scanf("%d", &b);
	// print the value returned by the GCD function
	printf("the GCD is %d", GCD(a, b));

}

int GCD (int a, int b) {
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