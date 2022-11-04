/*
#include <stdio.h>
#include <math.h>

struct Triangle {
    int a, b, c;
};

double areaFind(struct Triangle g);

int main() {
    struct Triangle g;
    
    double area1 = areaFind(g);
    double area2 = areaFind(g);
    
    if (area1 > area2) {
        printf("Triangle 1 is larger\n");
    } else if (area2 > area1) {
        printf("Triangle 2 is larger\n");
    } else {
        printf("Both triangles have the same size\n");
    }
}

double areaFind(struct Triangle g) {
    printf("Enter a: ");
    scanf("%d", &g.a);
    printf("Enter b: ");
    scanf("%d", &g.b);
    printf("Enter c: ");
    scanf("%d", &g.c);
    
    int p = (g.a + g.b + g.c)/2;
    double s = sqrt(p * (p - g.a) * (p - g.b) * (p - g.c));
    printf("Area is: %f\n", s);
    return s;
}
*/
