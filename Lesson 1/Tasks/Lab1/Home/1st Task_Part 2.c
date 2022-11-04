#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b, c, d, e, f, g, h, i, j;
    
    printf("'ax^2 + bx + c = 0' фүнкцийн хариуг олохын тулд тоонуудыг оруулна уу:\n");
    
    printf("а тоог оруулнa уу: ");
    scanf("%f", &a);
    printf("а тоо бол: %f \n", a);
    
    printf("b тоог оруулнa уу: ");
    scanf("%f", &b);
    printf("b тоо бол: %f \n", b);
    
    printf("c тоог оруулнa уу: ");
    scanf("%f", &c);
    printf("c тоо бол: %f \n", c);
           
    d=sqrt(b*b-4*a*c);
    e=0-b;
    f=e+d;
    g=e-d;
    h=2*a;
    i=f/h;
    j=g/h;
    
    printf("x_1 бол %f\n", i);
    printf("x_2 бол %f\n", j);
    
    return 0;
}
