#include <stdio.h>

int main() {
    int a, b, c, d;
    
    printf("a тоог оруулна уу (1 оронтой): ");
    scanf("%d", &a);
    printf("a тоо бол: %d\n", a);
    
    printf("b тоог оруулна уу (1 оронтой): ");
    scanf("%d", &b);
    printf("b тоо бол: %d\n", b);
    
    printf("c тоог оруулна уу (1 оронтой): ");
    scanf("%d", &c);
    printf("c тоо бол: %d\n", c);
    
    printf("d тоог оруулна уу (1 оронтой): ");
    scanf("%d", &d);
    printf("d тоо бол: %d\n", d);
    
    printf("%d%d%d%d\n", a, b, c, d);
    printf("%d%d%d%d\n", a, c, b, d);
    printf("%d%d%d%d\n", a, b, d, c);
    printf("%d%d%d%d\n", a, c, d, b);
    printf("%d%d%d%d\n", a, d, c, b);
    printf("%d%d%d%d\n", a, d, b, c);
    printf("%d%d%d%d\n", b, c, a, d);
    printf("%d%d%d%d\n", b, c, d, a);
    printf("%d%d%d%d\n", b, d, a, c);
    printf("%d%d%d%d\n", b, d, c, a);
    printf("%d%d%d%d\n", b, a, d, c);
    printf("%d%d%d%d\n", b, a, c, d);
    printf("%d%d%d%d\n", c, b, d, a);
    printf("%d%d%d%d\n", c, b, a, d);
    printf("%d%d%d%d\n", c, a, b, d);
    printf("%d%d%d%d\n", c, a, d, b);
    printf("%d%d%d%d\n", c, d, a, b);
    printf("%d%d%d%d\n", c, d, b, a);
    printf("%d%d%d%d\n", d, a, b, c);
    printf("%d%d%d%d\n", d, a, c, b);
    printf("%d%d%d%d\n", d, b, c, a);
    printf("%d%d%d%d\n", d, b, a, c);
    printf("%d%d%d%d\n", d, c, a, b);
    printf("%d%d%d%d\n", d, c, b, a);
    
    return 0;
}

