#include <stdio.h>
#define SIZE 10

void bubbleSort(int *const array, const int size);

int main() {
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int i;
    printf("Data items in original order");
    
    for (i = 0; i < SIZE; i++) {
        printf("%3d", a[i]);
    }
    
    bubbleSort(a, SIZE);
    printf("\nData items in descending order");
    for (i = 0; i < SIZE; i++) {
        printf("%3d", a[i]);
    }
    printf("\n");
    return 0;
}

void bubbleSort(int *const array, const int size) {
    void swap(int *element1ptr, int *element2ptr);
    int pass, j;
    
    for (pass = 0; pass < SIZE - 1; pass++) {
        for (j = 0; j < SIZE - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void swap(int *element1ptr, int *element2ptr) {
    int temp = *element1ptr;
    *element1ptr = *element2ptr;
    *element2ptr = temp;
}
