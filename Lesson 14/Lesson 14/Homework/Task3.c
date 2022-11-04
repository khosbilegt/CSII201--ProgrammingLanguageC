/*
#include <stdio.h>
int *findMostEven(int a[][100], int n, int m);
int main() {
    int a[4][100] = {{1, 2, 3, 3}, {2, 3, 4, 1}, {4, 2, 6, 8}, {4, 4, 4, 5}};
    int *result = findMostEven(a, 4, 4); // Read Array shaardlaggui gej uzsen tul declare hiisen
    printf("%d\n", *result);
}
int *findMostEven(int a[][100], int n, int m) {
    int rowValue = 0, maxValue = -1, maxRow = 0;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (a[r][c] % 2 == 0) {
                rowValue = rowValue + 1;
            }
        }
        if (rowValue > maxValue) {
            maxValue = rowValue;
            maxRow = r;
        }
        rowValue = 0;
    }
    int *result = &maxRow;
    return result;
}
*/
