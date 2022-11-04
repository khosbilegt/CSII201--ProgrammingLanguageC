/*
#include <stdio.h>
int count(int n, int A[]);
int countDiv(int n);

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Number is %d\n", n);
    int divisors = countDiv(n);
    
    int arr[divisors];
    arr[divisors] = count(n, arr);
    
    for (int i = 0; i < divisors; i++) {
        printf("%d\n", arr[i]);
    }
}


int count(int n, int A[]) {
    int num = 0;
    for (int i = 0; i < n; i++) {
        if (n % i == 0) {
            A[num] = i;
            num = num + 1;
        }
    }
    return *A;
}

int countDiv(int n) {
    int divisors = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            divisors = divisors + 1;
        }
    }
    return divisors;
}
*/
