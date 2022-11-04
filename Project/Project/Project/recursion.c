/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int result = 0;
    int arr[100];
    for (int i = 0; i < n; i++) {
        if (i >= 4) {
            arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
            result = arr[i];
        } else {
            arr[i] = i + 1;
            result = arr[i];
        }
    }
    return result;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans);
    return 0;
}
*/
