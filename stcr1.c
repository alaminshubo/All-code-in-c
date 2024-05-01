#include <stdio.h>


struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student student;
    struct Student *ptr = &student;


    printf("Enter student name: ");
    scanf("%s", &ptr->name);
    printf("Enter roll number: ");
    scanf("%d", &ptr->rollNumber);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);


    printf("\nStudent Details\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->rollNumber);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
