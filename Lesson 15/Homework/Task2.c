/*
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char fName[20], lName[20], id[10];
    float gpa;
};
typedef struct Student Student;
void readConsole(Student a[], int n);
void printConsole(Student a[], int n);
void writeFile(Student a[], int n, char fname[]);
int readFile(Student a[], char fname[]);
int main() {
    Student a[100], b[100];
    int n, m;
 
    printf("Enter Number of Students: ");
    scanf("%d", &n);
    readConsole(a, n);
    printConsole(a, n);
    writeFile(a, n, "info.dat");
    m = readFile(b, "info.dat");
    printConsole(b, m);
    return 0;
}
void readConsole(Student a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("---Student %d---\n", i + 1);
        printf("First Name of Student %d: ", i + 1);
        scanf("%s", a[i].fName);
        printf("Last Name of Student %d: ", i + 1);
        scanf("%s", a[i].lName);
        printf("ID of Student %d: ", i + 1);
        scanf("%s", a[i].id);
        printf("GPA of Student %d: ", i + 1);
        scanf("%f", &a[i].gpa);
    }
}
void printConsole(Student a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("---Student %d---\n", i + 1);
        printf("First Name: %s\n", a[i].fName);
        printf("Last Name: %s\n", a[i].lName);
        printf("ID: %s\n", a[i].id);
        printf("GPA: %f\n", a[i].gpa);
    }
}
void writeFile(Student a[], int n, char fname[]) {
    FILE *file;
    file = fopen("info.dat", "w+");
    for (int i = 0; i < n; i++) {
        fprintf(file, "---%d---\nFirst Name: %s\nLast Name: %s\nID: %s\nGPA: %f\n", i + 1, a[i].fName, a[i].lName, a[i].id, a[i].gpa);
    }
    fclose(file);
}
int readFile(Student a[], char fname[]) {
    int num = 0;
    FILE *file;
    file = fopen("info.dat", "r+");
    for (int i = 0; i < 100; i++) {
        fscanf(file, "---%d---\nFirst Name: %s\nLast Name: %s\nID: %s\nGPA: %f\n", &num, a[i].fName, a[i].lName, a[i].id, &a[i].gpa);
    }
    printf("%d", num);
    return num;
}
*/
