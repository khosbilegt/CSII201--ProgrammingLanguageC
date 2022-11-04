#include <stdio.h>

int main() {
    float a;
    
    printf("Шалгалтын дүнг оруулна уу: ");
    scanf("%f", &a);
    printf("Шалгалтын дүн бол: %f", a);
    
    a >= 90 && printf("- A\n");
    a < 90 && a >= 80 && printf("- B\n");
    a < 80 && a >= 70 && printf("- C\n");
    a < 70 && a >= 60 && printf("- D\n");
    a < 60 && printf("- F\n");
}
