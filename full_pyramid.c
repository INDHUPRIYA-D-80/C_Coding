// C program to print the full pyramid pattern of stars 
#include <stdio.h> 

int main() 
{ 
	int rows = 5;
	int i,j,k; 

	// first loop to print all rows 
	for (i = 0; i < rows; i++) { 

		// inner loop 1 to print white spaces 
		for ( j = 0; j < 2 * (rows - i) - 1; j++) { 
			printf(" "); 
		} 

		// inner loop 2 to print star * character 
		for ( k = 0; k < 2 * i + 1; k++) { 
			printf("* "); 
		} 
		printf("\n"); 
	} 
	return 0; 
}

