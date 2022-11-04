#include <stdio.h>

int main()
{
    
    int year;
    int month;
    int day;
    printf("Оныг оруулна уу: ");
    scanf("%d", &year);
    printf("Сарыг оруулна уу: ");
    scanf("%d", &month);
    printf("Өдрийг: ");
    scanf("%d", &day);
    printf("Өнөөдрийн бол %d.%d.%d\n", year, month, day);
    
    return 0;
}
