#include <stdio.h>

#define MAXLIMIT 10000

int main (void){
	long n, nminus1, current;
	double total; /* */
	n = 1;
	nminus1 = 0;
	current = 1;
	total = 0;
	while (current <= MAXLIMIT){
		current = n + nminus1;
		printf ("CURRENT FIBONACCI NUMBER IS %ld\n",current);
		if ((current % 2) == 0){
			printf("Adding %ld to the total\n", current);
			total += current;
		}
		nminus1 = n;
		n = current;
	}
	printf("Total of even fibonacci numbers = %ld\n",total);
	return 0;
}