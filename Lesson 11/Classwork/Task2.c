/*
#include <stdio.h>
#include <math.h>

struct Points {
    int x, y;
};

double distance(struct Points a, struct Points b);

int main() {
    struct Points a;
    printf("Input x1: ");
    scanf("%d", &a.x);
    printf("Input y1: ");
    scanf("%d", &a.y);
    
    struct Points b;
    printf("Input x2: ");
    scanf("%d", &b.x);
    printf("Input y2: ");
    scanf("%d", &b.y);
    
    double res = distance(a, b);
    printf("Distance: %f\n", res);
}

double distance(struct Points a, struct Points b) {
    int xRes = b.x - a.x;
    xRes = xRes * xRes;
    int yRes = b.y - a.y;
    yRes = yRes * yRes;
    double res = xRes + yRes;
    res = sqrt(res);
    return res;
}
  */
