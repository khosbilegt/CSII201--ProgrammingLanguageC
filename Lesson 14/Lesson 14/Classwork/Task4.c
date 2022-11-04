/*
#include <stdio.h>
void find(int *begin, int *end, int x, int y);
int main() {
    int a[5] = {3, 7, 1, 2, 4};
    int x, y;
    printf("Search For: ");
    scanf("%d", &x);
    printf("Replace With: ");
    scanf("%d", &y);
    find(a, a + 5, x, y);
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
void find(int *begin, int *end, int x, int y) {
    long int size = end - begin;
    for (int i = 0; i < size; i++) {
        if (*(begin + i) == x) {
            *(begin + i) = y;
        }
    }
}
*/
