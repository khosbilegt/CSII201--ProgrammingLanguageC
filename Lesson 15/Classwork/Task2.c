/*
#include <stdio.h>
#include <stdlib.h>
int *getArray(int n, int value);
void printArray(int arr[], int size);
int main() {
    int n, value;
    printf("Size of Array: ");
    scanf("%d", &n);
    printf("Value of Array: ");
    scanf("%d", &value);
    int *a = getArray(n, value);
    printArray(a, n);
}
int *getArray(int n, int value) {
    int *arr = malloc(sizeof (int) * n);
    for (int i = 0; i < n; i++)
    {
      arr[i] = value;
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
