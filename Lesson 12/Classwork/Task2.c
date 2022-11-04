/*
#include <stdio.h>

typedef struct Date{
    int d, m, y;
} Date;

Date readDate(void);
void printDate(Date);
int less(Date a, Date b);

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    Date date[n];
    for (int i = 0; i < n; i++) {
        printf("---------------------\n%d\n---------------------\n", i + 1);
        date[i] = readDate();
    }
    for (int i = 0; i < n; i++) {
        printf("---------------------\n%d\n---------------------\n", i + 1);
        printDate(date[i]);
    }
    return 0;
}

Date readDate(){
    Date s;
    printf("Enter Year: ");
    scanf("%d", &s.y);
    printf("Enter Month: ");
    scanf("%d", &s.m);
    while (s.m > 12 || s.m < 1) {
        printf("More than 0, less than 13\n");
        printf("Enter Month: ");
        scanf("%d", &s.m);
    }
    printf("Enter Day: ");
    scanf("%d", &s.d);
    while (s.d > 31 || s.d < 1) {
        printf("More than 0, less than 32\n");
        printf("Enter Day: ");
        scanf("%d", &s.d);
    }
    return s;
}

void printDate(Date dt){
    printf("%d/", dt.y);
    if (dt.m < 10) {
        printf("0%d/", dt.m);
    } else {
        printf("%d/", dt.m);
    }
    if (dt.d < 10) {
        printf("0%d\n", dt.d);
    } else {
        printf("%d\n", dt.d);
    }
}
*/
