#include <stdio.h>

int main() {
    int a, b, c, d, f;
    a = 0;
    b = 2;
    c = 1;
    d = 1;
    f = 1;
    
    (a || printf("o")) && c;
    (c && d) || printf("x");
    (d || b) && (f || printf("x"));
    a + b == 1 && printf("x");
    f && printf("o");
    (b && d) || printf("o");
    b + d == 3 && printf("o\n");

    return 0;
}
 

// (a || printf("o")) && c; <-- a 0 baival o hevlene.
// (c && d) || printf("x"); <-- c ba d 0-ees yalgaatai baih yostoi.
// (d || b) && (f || printf("x")); <--- d esvel b ba f baij bolohgui.
// a + b == 1 && printf("x"); <--- a + b = 1 baij bolohgui.
// f && printf("o"); <--- f too baival o hevlene.
// (b && d) || printf("o"); <--- b ba d 0-ees yalgaatai baival o hevlene.
// b + d == 3 && printf("o\n"); <--- b ba d-iin niilber 3 bol o hevlene.

// Deerh 4 nuhtsluus 3iig biyluulsen tohioldold bodlogo bodogdono. (d || b) && (f || printf("x"))-aas bolood f 0-ees yalgaatai baij
// bolohgui

