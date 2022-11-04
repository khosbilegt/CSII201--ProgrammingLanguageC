/*
#include <stdio.h>
int digitSum(int n);

int main() {
    int num;
    printf("Enter N: ");
    scanf("%d", &num);
    
    
    for (int i = 1; i < num; i++) {
        
        
        int sum = digitSum(i);
        
        if (i % sum == 0) {
            printf("%d\n", i);
        }
    }
}
    


int digitSum(int n) {
    int sum = 0, m;
    while (n > 0) {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}
*/
