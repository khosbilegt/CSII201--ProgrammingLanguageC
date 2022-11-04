/*
#include <stdio.h>

typedef struct tPoint {
    int x, y;
} tPoint;

typedef struct tTriangle {
    tPoint a, b, c;
} tTriangle;

tTriangle readTriangle(void);
tPoint readPoint(void);
int areaFind(tTriangle t);
int compare(tTriangle t1, tTriangle t2);

int main() {
    printf("---------------------\n1\n---------------------\n");
    tTriangle t1 = readTriangle();
    printf("---------------------\n2\n---------------------\n");
    tTriangle t2 = readTriangle();
    int result = compare(t1, t2);
    if (result == 1) {
        printf("Triangle 1 is larger\n");
    } else if (result == -1) {
        printf("Triangle 2 is larger\n");
    } else {
        printf("Both are equal\n");
    }
}

tTriangle readTriangle(void) {
    tTriangle t;
    printf("-------Enter Point A-------\n");
    t.a = readPoint();
    printf("-------Enter Point B-------\n");
    t.b = readPoint();
    printf("-------Enter Point C-------\n");
    t.b = readPoint();
    return t;
}

tPoint readPoint(void) {
    tPoint p;
    printf("Enter Coordinate X: \n");
    scanf("%d", &p.x);
    printf("Enter Coordinate Y: \n");
    scanf("%d", &p.y);
    return p;
}

int areaFind(tTriangle t) {
    int x1 = t.a.x;
    int x2 = t.b.x;
    int x3 = t.c.x;
    int y1 = t.a.y;
    int y2 = t.b.y;
    int y3 = t.c.y;
    int area = (x1 * y2) + (x2 * y3) + (x3 * y1) - (y1 * x2) - (y2 * x3) - (y3 * x1);
    area = area / 2;
    return area;
}

int compare(tTriangle t1, tTriangle t2) {
    int result = 0;
    int area1 = areaFind(t1);
    int area2 = areaFind(t2);
    if (area1 > area2) {
        result = 1;
    } else if (area1 < area2) {
        result = -1;
    }
    return result;
}
*/
