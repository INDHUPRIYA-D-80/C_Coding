// c program to print left half pyramid pattern of star 
#include <stdio.h> 

int main() 
{ 
	int rows = 5; 
	int i,j,k;
	

	// first loop is for printing the rows 
	for (i = 0; i < rows; i++) { 

		// loop for printing leading whitespaces 
		for ( j = 0; j < 2 * (rows - i) - 1; j++) { 
			printf(" "); 
		} 

		// loop for printing * character 
		for ( k = 0; k <= i; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
	return 0; 
}

