/*
#include <stdio.h>
int palinCheck(int num1);

int main() {
    int a;
    printf("Enter number:");
    scanf("%d", &a);
    
    int answer = palinCheck(a);
    printf("%d\n", answer);
    
}

int palinCheck(int num1) {
    int num2 = 0, rem, ph;
    
    ph = num1;
    
    while(ph != 0) {
        rem = ph % 10;
        num2 = num2 * 10 + rem;
        ph /= 10;
    }
    
    if (num2 == num1) {
        return 1;
    } else {
    return 0;
    }
}
*/
