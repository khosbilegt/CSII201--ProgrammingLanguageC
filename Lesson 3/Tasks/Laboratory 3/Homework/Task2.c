#include <stdio.h>

int main() {
    int y, m, d;
    
    printf("Enter Year: ");
    scanf("%d", &y);
    printf("Year is: %d\n", y);
    
    printf("Enter Month: ");
    scanf("%d", &m);
    printf("Month is: %d\n", m);
    
    printf("Enter Day: ");
    scanf("%d", &d);
    printf("Day is: %d\n", d);
    
    printf("Today is: %d.%d.%d\n", y, m, d);
    
    if (y > 2021) {
        printf("Future\n");
    } else if (y == 2021 && m > 2) {
        printf("Future\n");
    } else if (y == 2021 && m == 2 && d > 21) {
        printf("Future\n");
    } else if (y == 2021 && m == 2 && d == 21) {
        printf("Today\n");
    } else
        printf("Past\n");
    return 0;
}
