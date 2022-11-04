/*
#include <stdio.h>
#include <stdlib.h>
int size;
int *findDivisors(int n);
void printArray(int arr[], int size);
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int *a = findDivisors(n);
    printArray(a, 10); // sizeof ashiglaj bolohgui ?
}

int *findDivisors(int n) {
    int *arr = malloc(sizeof (int) * n);
    int j = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            arr[j] = i;
            j = j + 1;
        }
    }
    return arr;
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/
