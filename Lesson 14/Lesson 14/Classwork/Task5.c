/*
#include <stdio.h>
void reverse(int *begin, int *end);
int main() {
    int a[5] = {3, 7, 1, 2, 4};
    reverse(a, a + 3);
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
void reverse(int *begin, int *end) {
    long int size = end - begin + 1;
    int temp;
    for (int i = 0; i < size - 1; i++) {
        temp = *(begin + i);
        *(begin + i) = *(begin + size - i);
        *(begin + size - i) = temp;
    }
}
*/
