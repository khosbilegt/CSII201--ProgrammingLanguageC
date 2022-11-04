#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b, c, d, e, f, g, h, i;
    printf("a, b, c, d тоонуудыг өгч, фүнкзийн хариуг ол.\n");
    
    printf("а тоог оруулнa уу: ");
    scanf("%f", &a);
    printf("а тоо бол: %f \n", a);
    
    printf("b тоог оруулнa уу: ");
    scanf("%f", &b);
    printf("b тоо бол: %f \n", b);
    
    printf("c тоог оруулнa уу: ");
    scanf("%f", &c);
    printf("c тоо бол: %f \n", c);
    
    printf("d тоог оруулнa уу: ");
    scanf("%f", &d);
    printf("d тоо бол: %f \n", d);
    
    e=b/c;
    f=a*a*a+e;
    g=sqrt(f*f+d);
    h=d*d-a*e;
    i=g/h*d;
    
    printf("Хариу бол %f\n", i);
    
    
    return 0;
}
