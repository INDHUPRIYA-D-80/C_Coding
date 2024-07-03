// C implementation to illustrate
// the code of the structures

#include <stdio.h>
#include <stdlib.h>

// Structure Definition
struct student {
	int roll_no;
	char name[20];
};

int main()
{
	struct student* p;

	p = (struct student*)
		malloc(sizeof(struct student));

	// Arrow operator
	p->roll_no = 99;

	printf("The value at roll");
	printf("number is %d", p->roll_no);

	return 0;
}

