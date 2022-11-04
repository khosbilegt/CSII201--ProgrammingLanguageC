/*
#include <stdio.h>
int main() {
    FILE *file;
    int row1[100], row2[100];
    int n = 4;
    file = fopen("input.txt", "r+");
    for (int i = 0; i < n; i++) {
        fscanf(file, "%d ", &row1[i]);
    }
    for (int i = 0; i < n; i++) {
        fscanf(file, "\n%d ", &row2[i]);
    }
    int row1Sum = 0, row2Sum = 0, result;
    for (int i = 0; i < n; i++) {
        row1Sum = row1Sum + row1[i];
    }
    for (int i = 0; i < n; i++) {
        row2Sum = row2Sum + row2[i];
    }
    result = row1Sum + row2Sum;
    printf("Result: %d\n", result);
    fclose(file);
}
*/
