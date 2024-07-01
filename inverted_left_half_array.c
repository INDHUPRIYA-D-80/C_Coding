// C program to print the inverted left half pyramid pattern 
// of stars 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 
	int i,j,k;
	// first loop for printing all rows 
	for (i = 0; i < rows; i++) { 

		// first inner loop for printing white spaces 
		for ( j = 0; j < 2 * i; j++) { 
			printf(" "); 
		} 

		// second inner loop for printing star * 
		for ( k = 0; k < rows - i; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 

	return 0; 
}

