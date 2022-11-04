
#include <stdio.h>

int main() {
    char answer1;
    char answer2a;
    char answer3a;
    char answer4a;
    
    char answer2b;
    char answer3b;
    char answer4b;
    char answer5b;
    char answer6b;
    char answer7b;
    char answer8b;
    
    printf("Шөлтэй, устай хоол идэх үү? (y/n)\n");
    scanf(" %c", &answer1);
    
    if (answer1 == 'y') {
        printf("Цайтай юу? (y/n)\n");
        scanf(" %c", &answer2a);
        
        if (answer2a == 'y') {
            printf("Будаатай юу? (y/n)\n");
            scanf(" %c", &answer4a);
            if (answer4a == 'y')
                printf("Хоол: Будаатай цай\n");
            if (answer4a == 'n')
                printf("Хоол: Банштай цай\n");
            
        } else if (answer2a == 'n') {
            printf("Юутай идмээр байна: \n");
            printf("a) Хуйцай\n");
            printf("b) Гоймонтой Шөл\n");
            printf("c) Банштай Шөл\n");
            printf("d) Хар Шөл\n");
            printf("e) Ногоотой Шөл\n");
            printf("Аль нэгийг сонгоно уу... \n");
            scanf(" %c", &answer3a);
            
            if (answer3a == 'a')
                printf("Хоол: Хуйцай\n");
            if (answer3a == 'b')
                printf("Хоол: Гоймонтой Шөл\n");
            if (answer3a == 'c')
                printf("Хоол: Банштай Шөл\n");
            if (answer3a == 'd')
                printf("Хоол: Хар Шөл\n");
            if (answer3a == 'e')
                printf("Хоол: Ногоотой Шөл\n");
        } else
            printf("Зөв өгөгдөл оруулна уу...\n");
    }
    
    if (answer1 == 'n') {
        printf("Мах нь татсан уу? (y/n)\n");
        scanf(" %c", &answer2b);
        if (answer2b == 'y') {
            printf("Гуриланд ороосон уу? (y/n)\n");
            scanf(" %c", &answer3b);
            if (answer3b == 'y') {
                printf("Яаж болгосон:\n");
                printf("a) Шарсан\n");
                printf("b) Жигнэсэн\n");
                scanf(" %c", &answer4b);
                
                if (answer4b == 'a') {
                    printf("Яаж шарсан?\n");
                    printf("a) Шууд Шарсан\n");
                    printf("b) Хөөлгөн Шарсан\n");
                    scanf(" %c", &answer5b);
                    
                    if (answer5b == 'a')
                        printf("Хоол: Хуушуур\n");
                    else if (answer5b == 'b')
                        printf("Хоол: Пирожки\n");
                    else
                        printf("Зөв өгөгдөл оруулна уу...\n");
                }
            }   else if (answer3b == 'n') {
                printf("Будаатай юу? (y/n)\n");
                scanf(" %c", &answer8b);
                if (answer8b == 'y')
                    printf("Хоол: Тефтель\n");
                if (answer8b == 'n')
                    printf("Хоол: Өндөгтэй Пифштекс\n");
            } else
                printf("Зөв өгөгдөл оруулна уу...\n");
            
        } else if (answer2b == 'n') {
            printf("Юутай хольсон?\n");
            printf("a) Гурилтай\n");
            printf("b) Өндөгтэй\n");
            printf("c) Будаатай\n");
            printf("d) Ногоотой\n");
            scanf(" %c", &answer6b);
            if (answer6b == 'a')
                printf("Хоол: Цуйван\n");
            if (answer6b == 'b')
                printf("Хоол: Өндөгтэй Хуурга\n");
            if (answer6b == 'c') {
                printf("Холих уу? (y/n)\n");
                scanf(" %c", &answer7b);
                if (answer7b == 'y')
                    printf("Хоол: Будаатай Хуурга\n");
                if (answer7b == 'n')
                    printf("Хоол: Гуляш\n");
            }
        } else
            printf("Зөв өгөгдөл оруулна уу...\n");
    }
}

