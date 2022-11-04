#include <stdio.h>

int main() {
    
    float a, h, s, b;

    printf("'S = 1/2 * a * h' фүнкцийн хариуг олохын тулд тоонуудыг оруулна уу:");
    
    printf("а тоог оруулнa уу: ");
    scanf("%f", &a);
    printf("а тоо бол: %f \n", a);
    
    printf("h тоог оруулнa уу: ");
    scanf("%f", &h);
    printf("h тоо бол: %f \n", h);
    
    b=a*h;
    s=b/2;
    printf("Хариу бол: %f\n", s);
    return 0;
}
