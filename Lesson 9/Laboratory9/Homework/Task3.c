/*
#include <stdio.h>
void readArr(int A[], int n);
void printArr(int A[], int n);
int joinArr(int A[], int B[], int n, int m);

int main() {
    int a[100], b[100], n, m;
    printf("Enter number of elements of a: ");
    scanf("%d", &n);
    readArr(a, n);
    printArr(a, n);
    
    printf("Enter number of elements of b: ");
    scanf("%d", &m);
    readArr(b, m);
    printArr(b, m);
    
    int size = joinArr(a, b, n, m);
    printf("Size of joined array: %d\n", size);
    printArr(a, size);
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


int joinArr(int A[], int B[], int n, int m) {
    int size = n + m;
    for (int i = 0; i < m; i++) {
        A[n + i] = B[i];
    }
    return size;
}
*/
