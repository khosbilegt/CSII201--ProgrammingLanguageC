/*
#include <stdio.h>

int fiveNumbers(int n1, int n2, int n3, int n4, int n5);
int minChecker(int n1, int n2);

int main() {
    int n1, n2, n3, n4, n5, min = 0;
    
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter n3: ");
    scanf("%d", &n3);
    printf("Enter n4: ");
    scanf("%d", &n4);
    printf("Enter n5: ");
    scanf("%d", &n5);
    min = fiveNumbers(n1, n2, n3, n4, n5);
    printf("%d\n", min);
}


int fiveNumbers(int n1, int n2, int n3, int n4, int n5) {
    int minimum = 2147483647;
    minimum = minChecker(minimum, n1);
    minimum = minChecker(minimum, n2);
    minimum = minChecker(minimum, n3);
    minimum = minChecker(minimum, n4);
    minimum = minChecker(minimum, n5);
    
    return minimum;
}

int minChecker(int n1, int n2) {
    if (n1 > n2) {
        n1 = n2;
    }
    return n1;
}
*/
