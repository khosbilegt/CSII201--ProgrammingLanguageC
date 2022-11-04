#include <stdio.h>
typedef struct Rational {
int d, n; // d/n butarxai
} Rational;

Rational add(const Rational *a, const Rational *b);
Rational sub(const Rational *a, const Rational *b);
Rational mult(const Rational *a, const Rational *b);
Rational divRational(const Rational *a, const Rational *b);
void simplify(Rational *a); // xuraax
void readRational(Rational *a); // unshih
void printRational(Rational *a); // xevlex

int main() {
    Rational r1, r2;
    readRational(&r1);
    printRational(&r1);
    readRational(&r2);
    printRational(&r2);
    Rational sumAnswer = add(&r1, &r2);
    printf("Sum: %d/%d\n", sumAnswer.d, sumAnswer.n);
    Rational subAnswer = sub(&r1, &r2);
    printf("Sub: %d/%d\n", subAnswer.d, subAnswer.n);
    Rational multAnswer = mult(&r1, &r2);
    printf("Mult: %d/%d\n", multAnswer.d, multAnswer.n);
    Rational divAnswer = divRational(&r1, &r2);
    printf("Div: %d/%d\n", divAnswer.d, divAnswer.n);
}

Rational add(const Rational *a, const Rational *b) {
    Rational answer;
    answer.n = a->n * b->n;
    answer.d = a->d * b->n + b->d * a->n;
    simplify(&answer);
    return answer;
}
Rational sub(const Rational *a, const Rational *b) {
    Rational answer;
    answer.n = a->n * b->n;
    answer.d = a->d * b->n - b->d * a->n;
    simplify(&answer);
    return answer;
}
Rational mult(const Rational *a, const Rational *b) {
    Rational answer;
    answer.n = a->n * b->n;
    answer.d = a->d * b->d;
    simplify(&answer);
    return answer;
}
Rational divRational(const Rational *a, const Rational *b) {
    Rational answer;
    answer.d = a->d * b->n;
    answer.n = a->n * b->d;
    simplify(&answer);
    return answer;
}
void simplify(Rational *a) {
    for (int k = 2; k <= a->n && k <= a->d; k++) {
        if (a->n % k == 0 && a->d % k == 0) {
            a->n = a->n / k;
            a->d = a->d / k;
        }
    }
}
void readRational(Rational *a) {
    printf("Enter d: ");
    scanf("%d", &a->d);
    printf("Enter n: ");
    scanf("%d", &a->n);
}
void printRational(Rational *a) {
    printf("Number: %d/%d\n", a->d, a->n);
}
