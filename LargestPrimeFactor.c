#include <stdio.h>

#define PRIMEFACTORFOR 600851475143

int isNumberPrime (long numberToCheck){
	long denominator = 2;
	int retVal = 1; // assume number is prime
	while (denominator < numberToCheck){
		if (0 == (numberToCheck / denominator)){
			retVal = 0;
			break;
		}
		denominator++;
	}
	return retVal;
}

int main (void){
	long currentLargestPrimeDivisor = 0;
	long primeDenominator = 3;
	long numerator = PRIMEFACTORFOR;
	if (0 == PRIMEFACTORFOR % 2){
		currentLargestPrimeDivisor = 2;
	}
	else {
		while (numerator >= currentLargestPrimeDivisor){
		// find the largest prime factor of 
			while ( 0 != (numerator % primeDenominator)){
				primeDenominator++;
			}
			if (isNumberPrime(primeDenominator)){
				currentLargestPrimeDivisor = primeDenominator;
				numerator /= primeDenominator;
				printf("currentLargestPrimeDivisor = %lu numerator = %lu\n",currentLargestPrimeDivisor, numerator);
				primeDenominator = 3;
			} else {
				primeDenominator++;
			}

		}

	}
}
