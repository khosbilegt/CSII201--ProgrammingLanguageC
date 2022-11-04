/*
#include <stdio.h>
void readArr(int A[], int n);
void find(int a[], int n, int *min, int *max);

int main() {
    int min, max, size;
    printf("Enter size of array: \n");
    scanf("%d", &size);
    int arr[size];
    readArr(arr, size);
    find(arr, size, &min, &max);
    printf("Min: %d\nMax: %d\n", min, max);
}

void readArr(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter %dth number: ", i + 1);
        scanf("%d", &A[i]);
    }
}

void find(int a[], int n, int *min, int *max) {
    int currentMin = a[0];
    int currentMax = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > currentMax) {
            currentMax = a[i];
        }
        if (a[i] < currentMin) {
            currentMin = a[i];
        }
    }
    *min = currentMin;
    *max = currentMax;
}
*/
