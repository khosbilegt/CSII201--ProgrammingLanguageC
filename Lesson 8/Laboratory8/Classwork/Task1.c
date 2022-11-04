/*
#include <stdio.h>

int main() {
    
    char lName[100], fName[100], color[100], hobby[100], pastime[100];
    int year, month, day, age, oldReduction = 0;
    
    printf("Таны овог: ");
    scanf("%s", lName);
    
    printf("Таны Нэр: ");
    scanf("%s", fName);
    
    printf("Таны Төрсөн Он: ");
    scanf("%d", &year);
    
    printf("Таны Төрсөн Сар: ");
    scanf("%d", &month);
    
    printf("Таны Төрсөн Өдөр: ");
    scanf("%d", &day);
    
    printf("Таны Дуртай Өнгө: ");
    scanf("%s", color);
    
    printf("Таны Хобби Юу Вэ?\n");
    scanf("%s", hobby);
    
    printf("Чөлөөт Цагаараа Та Юу Хийдэг Вэ?\n");
    scanf("%s", pastime);

    if (month > 4) {
        oldReduction = 1;
    } else if (month == 4) {
        if (day > 6) { // 6nd Daalgavariin hugatsaa duusah tul taviv.
            oldReduction = 1;
        }
    }
        
    age = 2021 - year - oldReduction;
    
    printf("%s Овогтой %s нь %d оны %d сарын %d-ний өдөр төрсөн. Одоо %d настай. Түүний дуртай өнгө бол %s. Тэр чөлөөт цагаараа %s хийдэг. Түүний хобби бол %s.\n", lName, fName, year, month, day, age, color, pastime, hobby);
    
}
*/
