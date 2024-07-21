#include <stdio.h>

// Define the structure for employee details
struct Employee {
    int id;
    char name[100];
    float salary;
};

// Function to input employee details
void inputEmployeeDetails(struct Employee *e) {
    printf("Enter Employee ID: ");
    scanf("%d", &e->id);
    printf("Enter Employee Name: ");
    scanf("%s", e->name);
    printf("Enter Employee Salary: ");
    scanf("%f", &e->salary);
}

// Function to display employee details
void displayEmployeeDetails(struct Employee e) {
    printf("\nEmployee ID: %d", e.id);
    printf("\nEmployee Name: %s", e.name);
    printf("\nEmployee Salary: %.2f\n", e.salary);
}

int main() {
    struct Employee emp;

    // Input employee details
    inputEmployeeDetails(&emp);

    // Display employee details
    displayEmployeeDetails(emp);

    return 0;
}

