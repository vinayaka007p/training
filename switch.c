#include <stdio.h>
#include <string.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
void displayStudent(struct Student student) {
    printf("\nStudent Roll No: %d\n", student.rollNo);
    printf("Student Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
}
void updateStudent(struct Student *student) {
    printf("Enter new name: ");
    scanf(" %[^\n]%*c", student->name);
    scanf("%f", &student->marks);
}
int main() {
    struct Student student = {101, "Alice", 85.5};
    int choice;
    do {
        printf("\nStudent Management System\n");
        printf("1. Display Student Details\n");
        printf("2. Update Student Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                displayStudent(student);
                break;
            case 2:
                updateStudent(&student);
                printf("Student details updated successfully!\n");
                break;
            case 3:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 3);
    return 0;
}
