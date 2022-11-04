/*
#include <stdio.h>
#include <stdlib.h>
int *getArrayFromFile(char fName[]);
int size;
int main() {
    char fName[100];
    int *num = getArrayFromFile(fName);
    for (int i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
}
int *getArrayFromFile(char fName[]) {
    FILE *file;
    file = fopen("fName.txt", "r+");
    int *arr = malloc(sizeof (int) * 1);
    int j = 0;
    int count = 100;
    for (int i = 0; i < count; i++) {
        fscanf(file, "%d", &arr[j]);
        if(i == 0) {
            count = arr[j];
        }
        j = j + 1;
    }
    size = count;
    return arr;
}
*/
