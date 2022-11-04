#include <stdio.h>

int main() {
    
    int x = 1;
    
    
    while (x <= 31) {
        if (x == 7 || x == 14 || x == 21 || x == 28) {
            printf("Sunday: %d - Амралт\n", x);
        } else if (x == 6 || x == 13 || x == 20 || x == 27) {
            printf("Saturday: %d - Амралт\n", x);
        } else if (x == 5 || x == 12 || x == 19 || x == 26) {
            printf("Friday: %d\n", x);
        } else if (x == 4 || x == 11 || x == 18 || x == 25) {
            printf("Thursday: %d\n", x);
        } else if (x == 3 || x == 10 || x == 17 || x == 24 || x == 31) {
            printf("Wednesday: %d\n", x);
        } else if (x == 2 || x == 9 || x == 16 || x == 23 || x == 30) {
            printf("Tuesday: %d\n", x);
        } else if (x == 1 || x == 8 || x == 15 || x == 22 || x == 29) {
            printf("Monday: %d\n", x);
        }
        
        if (x == 8) {
            printf("- Амралт\n");
        }
        x ++;
    }
    
    return 0;
}
