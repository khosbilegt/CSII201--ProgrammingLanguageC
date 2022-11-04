#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b, d, e, f;
    double alpha, c;
    
    
    printf("а тоог оруулнa уу: ");
    scanf("%f", &a);
    printf("а тоо бол: %f \n", a);
    
    printf("b тоог оруулнa уу: ");
    scanf("%f", &b);
    printf("b тоо бол: %f \n", b);
    
    printf("α өнцөгийг оруулнa уу: ");
    scanf("%lf", &alpha);
    printf("α өнцөг бол: %lf\n", alpha);
    
    // Радиан --> Градус болгосон болно.
    c=alpha*3.1416/180;
    d=cos(c);
    e=a*a+b*b-2*a*b*d;
    f=sqrt(e);
    printf("Хариу бол: %f\n", f);
    
    
    return 0;
}
