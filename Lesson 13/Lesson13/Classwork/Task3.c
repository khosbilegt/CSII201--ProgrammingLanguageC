/*
#include <stdio.h>

void find(int a[], int n, int *addr, int *addr1);
void readArr(int A[], int n);
void printArr(int A[], int n);

int main() {
    int a[100];
    readArr(a, 5);
    printArr(a, 5);
    int x, y;
    find(a, 5, &x, &y);
    printf("tegsh toonuudiin too: %d\n", x);
    printf("sondgoi toonuudiin too: %d\n", y);
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

void find(int a[], int n, int *addr, int *addr1) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            *addr = *addr + 1;
        } else {
            *addr1 = *addr1 + 1;
        }
    }
}
*/
