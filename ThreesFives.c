#include <stdio.h>

int main (void) {
	int i = 3;
	int total = 0;
	for (; i <= 1000;i++){
	    if ( ((i % 3) == 0) || ((i % 5) == 0) ){
	    	printf("Adding %d to total\n",i);
	    	total += i;
	    }
	        
	}
	printf ("Total = %d\n",total);
	return 0;
}