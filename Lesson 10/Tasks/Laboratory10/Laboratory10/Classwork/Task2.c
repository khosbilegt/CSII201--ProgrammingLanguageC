/*
#include <stdio.h>
int count(int n);

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Number is %d\n", n);
    
    int divisors = count(n);
    printf("%d\n", divisors);
    
}

int count(int n) {
    int divisors = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            divisors = divisors + 1;
        }
    }
    return divisors;
}
*/
