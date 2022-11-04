/*
#include <stdio.h>
void readArr(int A[], int n);
void printArr(int A[], int n);
int *searchValue(int a[], int value, int size);

int main() {
    int a[100];
    readArr(a, 5);
    printArr(a, 5);
    int *p;
    int value = 3;
    p = searchValue(a, 4, 5);
    if (p == NULL) {
        printf("Oldsongui\n");
    } else {
    printf("%d too %d bairlald oldloo\n", value, *p); // p - a?
    }
    return 0;
}

void readArr(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter %dth number: ", i + 1);
        scanf("%d", &A[i]);
    }
}

void printArr(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%dth element is: %d\n", i + 1, A[i]);
    }
    printf("\n");
}

int *searchValue(int a[], int value, int size) {
    int *result = NULL;
    for (int i = 0; i < size; i++) {
        if (a[i] == value) {
            result = &value;
        }
    }
    return result;
}
*/
