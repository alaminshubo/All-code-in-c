#include <stdio.h>
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    // Declare an array of structures to store information for 10 students
    struct Student students[10];

    // Input information for each student
    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display information for each student
    printf("\nInformation for all students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
