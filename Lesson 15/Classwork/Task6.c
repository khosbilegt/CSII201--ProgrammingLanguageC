/*
#include <stdio.h>
struct Student {
    char fName[20], lName[20],  id[10];
    float gpa;
};
struct Student readName(struct Student read, FILE *file);
void printStudent(struct Student read, int i);
int main() {
    FILE *file;
    struct Student list[100];
    file = fopen("student.txt", "r+");
    int n;
    printf("Enter Number of Students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        list[i] = readName(list[i], file);
    }
    for (int i = 0; i < n; i++) {
        printStudent(list[i], i);
    }
}
struct Student readName(struct Student read, FILE *file) {
    char ph[100];
    fscanf(file, "%s %s %s %s %s %s", ph, ph, ph, ph, ph, read.fName);
    fscanf(file, "%s %s %s", ph, ph, read.lName);
    fscanf(file, "%s %s", ph, read.id);
    fscanf(file, "%s %f", ph, &read.gpa);
    return read;
}
void printStudent(struct Student print, int i) {
    printf("---Student No: %d---\n", i + 1);
    printf("First Name: %s\n", print.fName);
    printf("Last Name: %s\n", print.lName);
    printf("ID: %s\n", print.id);
    printf("GPA: %f\n", print.gpa);
    printf("\n");
}
*/
