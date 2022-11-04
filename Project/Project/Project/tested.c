#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int counter = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > 10 && arr[i] % 3 == 0) {
            counter = counter + 1;
            printf("%d\n", arr[i]);
        }
    }
    printf("%d\n", counter);
}
