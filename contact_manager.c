#include <stdio.h>
#include <string.h>

// Define a structure to store contact information
struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

// Function prototypes
void addContact(struct Contact contacts[], int *count);
void viewContacts(struct Contact contacts[], int count);
void searchContact(struct Contact contacts[], int count);
void deleteContact(struct Contact contacts[], int *count);

int main() {
    struct Contact contacts[100]; // Array to store contacts
    int count = 0;                // Number of contacts
    int choice;

    do {
        // Display menu
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the selected operation
        switch (choice) {
            case 1:
                addContact(contacts, &count);
                break;
            case 2:
                viewContacts(contacts, count);
                break;
            case 3:
                searchContact(contacts, count);
                break;
            case 4:
                deleteContact(contacts, &count);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to add a contact
void addContact(struct Contact contacts[], int *count) {
    printf("Enter name: ");
    scanf(" %[^\n]", contacts[*count].name);
    printf("Enter phone number: ");
    scanf("%s", contacts[*count].phone);
    printf("Enter email: ");
    scanf("%s", contacts[*count].email);
    (*count)++;
    printf("Contact added successfully!\n");
}

// Function to view all contacts
void viewContacts(struct Contact contacts[], int count) {
	int i;
    if (count == 0) {
        printf("No contacts found.\n");
    } else {
        for (i = 0; i < count; i++) {
            printf("\nContact %d\n", i + 1);
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
        }
    }
}

// Function to search for a contact by name
void searchContact(struct Contact contacts[], int count) {
    char name[50];
    printf("Enter the name to search: ");
    scanf(" %[^\n]", name);
    int i;
    for (i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("\nContact found:\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
            return;
        }
    }
    printf("Contact not found.\n");
}

// Function to delete a contact by name
void deleteContact(struct Contact contacts[], int *count) {
    char name[50];
    printf("Enter the name to delete: ");
    scanf(" %[^\n]", name);
    int i,j;
    for (i = 0; i < *count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            for (j = i; j < *count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            (*count)--;
            printf("Contact deleted successfully!\n");
            return;
        }
    }
    printf("Contact not found.\n");
}

