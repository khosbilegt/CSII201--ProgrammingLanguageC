/*
#include <stdio.h>
struct Student {
    char fName[20], lName[20],  id[10];
    float gpa;
};
struct Student readStudent(struct Student read);
void writeStudent(struct Student print, FILE *file, int i);
int main() {
    FILE *file;
    file = fopen("student.txt", "w+");
    int num;
    printf("Enter Number of Students: ");
    scanf("%d", &num);
    printf("Number of Students: %d\n", num);
    struct Student list[100];
    for (int i = 0; i < num; i++) {
        printf("---Student %d---\n", i + 1);
        list[i] = readStudent(list[i]);
    }
    for (int i = 0; i < num; i++) {
        writeStudent(list[i], file, i);
    }
}
struct Student readStudent(struct Student read) {
    printf("Enter First Name: ");
    scanf("%s", read.fName);
    printf("Enter Last Name: ");
    scanf("%s", read.lName);
    printf("Enter ID: ");
    scanf("%s", read.id);
    printf("Enter GPA: ");
    scanf("%f", &read.gpa);
    return read;
}
void writeStudent(struct Student print, FILE *file, int i) {
    fprintf(file, "---Student No: %d---\nFirst Name: %s\nLast Name: %s\nID: %s\nGPA: %f\n\n", i + 1, print.fName, print.lName, print.id, print.gpa);
}
*/
