#include <stdio.h>

int main() {
    int num_subjects;
    float marks_sum = 0.0, percentage;

    // Input number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);
    int i;
    // Input marks for each subject
    for ( i = 0; i < num_subjects; i++) {
        float mark;
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &mark);
        marks_sum += mark;
    }

    // Calculate percentage
    percentage = (marks_sum / (num_subjects * 100.0)) * 100.0;

    // Display the percentage
    printf("Total marks: %.2f\n", marks_sum);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

