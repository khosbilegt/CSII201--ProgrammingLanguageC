/*
#include <stdio.h>
#include <math.h>
double areaFind(void);

struct Triangle {
    int a, b, c;
};


int main() {
    double area1 = areaFind();
    double area2 = areaFind();
    
    if (area1 > area2) {
        printf("Triangle 1 is larger\n");
    } else if (area2 > area1) {
        printf("Triangle 2 is larger\n");
    } else {
        printf("Both triangles have the same size\n");
    }
}

double areaFind(void) {
    struct Triangle t;
    printf("Enter a: ");
    scanf("%d", &t.a);
    printf("Enter b: ");
    scanf("%d", &t.b);
    printf("Enter c: ");
    scanf("%d", &t.c);
    
    int p = (t.a + t.b + t.c)/2;
    double s = sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
    printf("Area is: %f\n", s);
    return s;
}
*/
