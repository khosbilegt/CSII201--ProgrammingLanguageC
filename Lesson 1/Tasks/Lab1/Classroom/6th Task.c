#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d, e, f, g;
    double h, i;
   
    printf("sqrt[(a + b)^2 + d]/c  фүнкцийн хариуг олохын тулд тоонуудыг оруулна уу: (a, b, c, d бүхэл тоо гэж үзнэ)\n");
    scanf("");
    
    printf("a тоог оруул: ");
    scanf("%d", &a);
    printf("а тоо бол %d\n", a);
    
    printf("b тоог оруул: ");
    scanf("%d", &b);
    printf("b тоо бол %d\n", b);
    
    printf("c тоог оруул: ");
    scanf("%d", &c);
    printf("c тоо бол %d\n", c);
    
    printf("d тоог оруул: ");
    scanf("%d", &d);
    printf("d тоо бол %d\n", d);
    
    e=a+b;
    f=e*e;
    g=f+d;
    h=sqrt(g);
    i=h/2;
    
    printf("sqrt[(a + b)^2 + d]/c  фүнкцийн хариу бол: %.2f\n", i);
    return 0;
}
