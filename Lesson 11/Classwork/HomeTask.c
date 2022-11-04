/*
#include <stdio.h>
#include <string.h>

struct Student {
    char fName[20], lName[20], id[10];
    float golch;
};

typedef struct Student Student;
void readStudents(Student a[], int n);
void printStudents(Student a[], int n);
void searchByFName(Student a[], int n, char fName[]);
void searchByLName(Student a[], int n, char lName[]);
void searchByID(Student a[], int n, char id[]);
void searchByGolch(Student a[], int n, float golch);
void sortByGolch(Student a[], int n);
int search(Student a[], int n);

int main() {
    int num;
    printf("Enter number of students: ");
    scanf("%d", &num);
    printf("Number of students is: %d\n", num);
    
    struct Student s[num];
    readStudents(s, num);
    printf("\n");
    printStudents(s, num);
    printf("\n");
    
    sortByGolch(s, num);
    printStudents(s, num);
    
    int yn;
    printf("Do you want to search a student? Input 1 for yes, and any number for no. \n");
    scanf("%d", &yn);
    if (yn == 1) {
        search(s, num);
    } else {
        printf("Program Ended...\n");
    }
}

void readStudents(Student a[], int n) {
    for (int i = 0; i < n; i++) {
        // First Name
        printf("Enter First Name of Student %d: ", i + 1);
        scanf("%s", a[i].fName);
        
        // Last Name
        printf("Enter Last Name of Student %d: ", i + 1);
        scanf("%s", a[i].lName);
        
        // ID
        printf("Enter ID of Student %d: ", i + 1);
        scanf("%s", a[i].id);
        
        // Golch
        printf("Enter Golch of Student %d: ", i + 1);
        scanf("%f", &a[i].golch);
    }
    printf("\n");
}

void printStudents(Student a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("First Name of Student %d is: %s\n", i + 1, a[i].fName);
        printf("Last Name of Student %d is: %s\n", i + 1, a[i].lName);
        printf("ID of Student %d is: %s\n", i + 1, a[i].id);
        printf("Golch of Student %d is: %f\n", i + 1, a[i].golch);
    }
    printf("\n");
}

int search(Student s[], int num) {
    int choice;
    printf("Enter the number to execute the command.\n");
    printf("1. By First Name\n");
    printf("2. By Last Name\n");
    printf("3. By ID Name\n");
    printf("4. By Golch\n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        char searchFName[20];
        printf("Enter First Name of Student you wish to search: ");
        scanf("%s", searchFName);
        searchByFName(s, num, searchFName);
    } else if (choice == 2) {
        char searchLName[20];
        printf("Enter Last Name of Student you wish to search: ");
        scanf("%s", searchLName);
        searchByLName(s, num, searchLName);
    } else if (choice == 3) {
        char searchID[10];
        printf("Enter ID of Student you wish to search: ");
        scanf("%s", searchID);
        searchByLName(s, num, searchID);
    } else if (choice == 4) {
        char searchGolch[10];
        printf("Enter Golch of Student you wish to search: ");
        scanf("%s", searchGolch);
        searchByLName(s, num, searchGolch);
    } else if (choice == 0) {
        return 0;
    } else {
        printf("Enter number between 1 - 4. Press 0 if you wish to exit...\n");
        search(s, num);
    }
    return 0;
}

void searchByFName(Student a[], int n, char fName[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(fName, a[i].fName) == 0) {
            printf("First Name is: %s\n", a[i].fName);
            printf("Last Name is: %s\n", a[i].lName);
            printf("ID is: %s\n", a[i].id);
            printf("Golch is: %f\n", a[i].golch);
            printf("\n");
        } else {
            break;
        }
    }
    printf("\n");
}

void searchByLName(Student a[], int n, char lName[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(lName, a[i].lName) == 0) {
            printf("First Name is: %s\n", a[i].fName);
            printf("Last Name is: %s\n", a[i].lName);
            printf("ID is: %s\n", a[i].id);
            printf("Golch is: %f\n", a[i].golch);
            printf("\n");
        } else {
            
        }
    }
}

void searchByID(Student a[], int n, char id[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(id, a[i].id) == 0) {
            printf("First Name is: %s\n", a[i].fName);
            printf("Last Name is: %s\n", a[i].lName);
            printf("ID is: %s\n", a[i].id);
            printf("Golch is: %f\n", a[i].golch);
            printf("\n");
        } else {
            
        }
    }
}

void searchByGolch(Student a[], int n, float golch) {
    for (int i = 0; i < n; i++) {
        if (golch == a[i].golch) {
            printf("First Name is: %s\n", a[i].fName);
            printf("Last Name is: %s\n", a[i].lName);
            printf("ID is: %s\n", a[i].id);
            printf("Golch is: %f\n", a[i].golch);
            printf("\n");
        } else {
            
        }
    }
}

void sortByGolch(Student a[], int n) {
    struct Student temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].golch > a[j].golch) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
*/
