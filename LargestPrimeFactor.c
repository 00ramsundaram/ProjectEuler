#include <stdio.h>

#define PRIMEFACTORFOR 68571 // 60085147 // 5143

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
		while (primeDenominator <= PRIMEFACTORFOR){
			if ( 0 == (numerator % primeDenominator)){
				if (isNumberPrime(primeDenominator)){
					currentLargestPrimeDivisor = primeDenominator;
					printf ("Prime denominator = %lu currentLargestPrimeDivisor = %lu\n",primeDenominator,currentLargestPrimeDivisor);
					numerator /= primeDenominator;
					primeDenominator = 3;
					if (1 == numerator) {
						break;
					}
				}
			}
			primeDenominator +=2;

		}
	}
	printf("Largest Prime Divisor of %lu = %lu\n",PRIMEFACTORFOR,currentLargestPrimeDivisor);
	return 0;
}
