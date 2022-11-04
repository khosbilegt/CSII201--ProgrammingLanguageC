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
    
    
    b < a && c < a && printf("Хамгийн их: a (%d)\n", a);
    a < b && c < b && printf("Хамгийн их: b (%d)\n", b);
    a < c && b < c && printf("Хамгийн их: c (%d)\n", c);
    
    b < a && c > a && printf("Дунд: a (%d)\n", a);
    b > a && c < a && printf("Дунд: a (%d)\n", a);
    
    a < b && c > b && printf("Дунд: b (%d)\n", b);
    a > b && c < b && printf("Дунд: b (%d)\n", b);
    
    a > c && b < c && printf("Дунд: c (%d)\n", c);
    a < c && b > c && printf("Дунд: c (%d)\n", c);
    
    b > a && c > a && printf("Хамгийн бага: a (%d)\n", a);
    a > b && c > b && printf("Хамгийн бага: b (%d)\n", b);
    a > c && b > c && printf("Хамгийн бага: c (%d)\n", c);
    
}

