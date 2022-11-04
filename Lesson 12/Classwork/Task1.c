/*
#include <stdio.h>

typedef struct Date{
    int d, m, y;
} Date;

Date readDate(void);
void printDate(Date);
int less(Date a, Date b);

int main(){
    Date date = readDate();
    printDate(date);
    printf("Input 2nd Date: \n");
    Date date2 = readDate();
    int result = less(date, date2);
    if (result == -1) {
        printf("Same Time\n");
    } else {
        printf("%d", result);
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

int less(Date a, Date b) {
    if (a.y > b.y) {
        return 0;
    } else if (b.y < a.y) {
        return 1;
    } else if (a.m > b.m) {
        return 0;
    } else if (a.m < b.m) {
        return 1;
    } else if (a.d > b.d) {
        return 0;
    } else if (a.d < b.d) {
        return 1;
    } else {
        return -1;
    }
    return 0;
}
*/
