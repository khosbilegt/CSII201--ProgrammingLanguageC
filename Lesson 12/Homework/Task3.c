#include <stdio.h>
#include <math.h>

typedef struct Vector {
    int dim;
    float dat[100];
} Vector;

int dotProduct(Vector a, Vector b);
Vector scalarMult(Vector a, int t);
Vector scalarMultFloat(Vector a, float t); // Unneeded
int len(Vector a);
Vector readVector(Vector a, int d);
void printVector(Vector a);

int main() {
    Vector a;
    Vector b;
    int d;
    float t;
    printf("Enter dimension: ");
    scanf("%d", &d);
    a.dim = d;
    b.dim = d;
    printf("-----Vector A-----\n");
    a = readVector(a, d);
    printf("-----Vector B-----\n");
    b = readVector(b, d);
    int dotResult = dotProduct(a, b);
    printf("Dot Product: %d\n", dotResult);
    printf("Enter t: ");
    scanf("%f", &t);
    printf("-----Scalar Product-----\n");
    Vector aScalar = scalarMult(a, t);
    printVector(aScalar);
    Vector bScalar = scalarMult(b, t);
    printVector(bScalar);
    printf("-----Vector Lengths (Approximate Int)-----\n");
    int aLength = len(a);
    int bLength = len(b);
    printf("Length A: %d\nLength B: %d\n", aLength, bLength);
    return 0;
}

Vector readVector(Vector a, int d) {
    for (int i = 0; i < a.dim; i++) {
        printf("%d: ", i + 1);
        scanf("%f", &a.dat[i]);
    }
    return a;
}

void printVector(Vector a) {
    for (int i = 0; i < a.dim; i++) {
        printf("%d: %f\n", i + 1, a.dat[i]);
    }
}

int dotProduct(Vector a, Vector b) {
    int result = 0;
    int sum;
    for (int i = 0; i < a.dim + 1; i++) {
        sum = a.dat[i] * b.dat[i];
        result = result + sum;
    }
    return result;
}

Vector scalarMult(Vector a, int t) {
    Vector result = a;
    for (int i = 0; i < a.dim; i++) {
        result.dat[i] = a.dat[i] * t;
    }
    return result;
}

int len(Vector a) {
    float result = 0;
    for (int i = 0; i < a.dim; i++) {
        result = result + (a.dat[i] * a.dat[i]);
    }
    result = sqrt(result);
    return result;
}
