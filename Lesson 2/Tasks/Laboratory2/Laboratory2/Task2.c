#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("a тоог оруулна уу: ");
    scanf("%d", &a);
    printf("a тоо бол: %d\n", a);
    
    printf("b тоог оруулна уу: ");
    scanf("%d", &b);
    printf("b тоо бол: %d\n", b);
    
    c = (a > b) * a + (a <= b) * b;
    (c == a) && printf("Их: %d \nБага: %d\n", a, b);
    (c == b) && printf("Их: %d \nБага: %d\n", b, a);
    
    return 0;
}
