/*
#include <stdio.h>
struct Rational {
    int d, n; // d / n
};

struct Rational add(struct Rational a, struct Rational b);
struct Rational sub(struct Rational a, struct Rational b);
struct Rational mult(struct Rational a, struct Rational b);
struct Rational divis(struct Rational a, struct Rational b);
struct Rational simplify(struct Rational a);
void print(struct Rational a);

int main() {
    struct Rational r;
    struct Rational m;
    
    printf("The format is in d/n\n");
    
    printf("Input d of first number: ");
    scanf("%d", &r.d);
    printf("Input n of first number: ");
    scanf("%d", &r.n);
    
    printf("Input d of second number: ");
    scanf("%d", &m.d);
    printf("Input n of second number: ");
    scanf("%d", &m.n);
    
    struct Rational added = add(r, m);
    printf("Added: %d / %d\n", added.d, added.n);
    
    struct Rational subtracted = sub(r, m);
    printf("Subtracted: %d / %d\n", subtracted.d, subtracted.n);
    
    struct Rational multiplied = mult(r, m);
    printf("Multiplied: %d / %d\n", multiplied.d, multiplied.n);
    
    struct Rational divided = divis(r, m);
    printf("Divided: %d / %d\n", divided.d, divided.n);
    
    struct Rational simplifiedR = simplify(r);
    printf("Simplified First Number: %d / %d\n", simplifiedR.d, simplifiedR.n);
    
    struct Rational simplifiedM = simplify(m);
    printf("Simplified Second Number: %d / %d\n", simplifiedM.d, simplifiedM.n);
}


struct Rational add(struct Rational a, struct Rational b) {
    struct Rational result;
    int d1 = a.d * b.n;
    int d2 = b.d * a.n;
    result.n = a.n * b.n;
    result.d = d1 + d2;
    return result;
}

struct Rational sub(struct Rational a, struct Rational b) {
    struct Rational result;
    int d1 = a.d * b.n;
    int d2 = b.d * a.n;
    result.n = a.n * b.n;
    result.d = d1 - d2;
    return result;
}

struct Rational mult(struct Rational a, struct Rational b) {
    struct Rational result;
    result.d = a.d * b.d;
    result.n = a.n * b.n;
    return result;
}

struct Rational divis(struct Rational a, struct Rational b) {
    int tempN = b.n;
    b.n = b.d;
    b.d = tempN;
    struct Rational result = mult(a, b);
    return result;
}

struct Rational simplify(struct Rational a) {
    
    for (int k = 2; k <= a.n && k <= a.d; k++) {
        if (a.n % k == 0 && a.d % k == 0) {
            a.n = a.n / k;
            a.d = a.d / k;
        }
    }
    struct Rational result = a;
    return result;
}
*/
