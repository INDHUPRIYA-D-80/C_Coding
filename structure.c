// C implementation to demonstrate
// the usage of structures

#include <stdio.h>
#include <string.h>

// Structure Definition
struct student {
	// data members
	int roll_no; // 4 bytes
	char name[20]; // 20 bytes
};

int main()
{
	// Structure variable Declaration
	struct student stu;

	stu.roll_no = 64;
	strcpy(stu.name, "Saurabh");

	printf("Structure Data\n");
	printf("Roll No: %d\n", stu.roll_no);
	printf("Name: %s\n", stu.name);

	int size = sizeof(stu);

	printf("Size of Structure student");
	printf("is %d", size);
}

