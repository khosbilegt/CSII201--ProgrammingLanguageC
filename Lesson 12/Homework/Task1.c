/*
#include <stdio.h>

typedef struct Date{
    int d, m, y;
} Date;

Date readDate(void);
void printDate(Date);
int daysLeft(Date dt1, Date dt2);
const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    Date naadam;
    naadam.d = 11;
    naadam.m = 7;
    Date current = readDate();
    int rem = daysLeft(naadam, current);
    printf("Days left: %d\n", rem);
    return 0;
}

Date readDate(){
    Date s;
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

int daysLeft(Date dt1, Date dt2)
{
    int result = 0;
    int n1 = dt1.d;
    for (int i = 0; i < dt1.m - 1; i++) {
        n1 += monthDays[i];
    }
    int n2 = dt2.d;
    for (int i = 0; i < dt2.m - 1; i++) {
        n2 += monthDays[i];
    }
    if (dt2.m > 7 || (dt2.m == 7 && dt2.d > 11)) {
        result = result + 365;
    }
    result = result + n1 - n2;
    return result;
}
*/
