// C program to print the inverted full pyramid pattern of 
// stars 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 
	int i,j,k;
	// first loop for printing all rows 
	for (i = 0; i < rows; i++) { 

		// first inner loop for printing leading white 
		// spaces 
		for ( j = 0; j < 2 * i; j++) { 
			printf(" "); 
		} 

		// second inner loop for printing stars * 
		for (k = 0; k < 2 * (rows - i) - 1; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
}

