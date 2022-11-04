#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("a тоог оруулна уу: ");
    scanf("%d", &a);
    printf("a тоо бол: %d\n", a);
    
    printf("b тоог оруулна уу: ");
    scanf("%d", &b);
    printf("b тоо бол: %d\n", b);
    
    
    printf("c тоог оруулна уу: ");
    scanf("%d", &c);
    printf("c тоо бол: %d\n", c);
    
    a == b && b == c && printf("zuv gurvaljin\n");
    
    (a == b || b == c || a == c) && printf("adil hajuut \n");
    
    !(a == b || b == c || a == c) && printf("eldev talt\n");
    
}

