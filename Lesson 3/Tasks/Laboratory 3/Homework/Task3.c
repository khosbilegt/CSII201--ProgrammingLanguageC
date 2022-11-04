#include <stdio.h>

int main() {
    int w, h;
    char g;
    float avgW;
    float extraH1,extraH2, extraW;
    
    printf("Enter Height (centimeter): ");
    scanf("%d", &h);
    printf("Height is is: %d\n", h);
    
    printf("Enter Weight (kg): ");
    scanf("%d", &w);
    printf("Weight is: %d\n", w);
    
    printf("Enter Gender (F / M): ");
    scanf(" %c", &g);
    printf("Gender is: %c\n", g);
    
    if (g == 'm' || g == 'M') {
        extraH1 = h - 150;
        extraH2 = extraH1 / 2.5;
        extraW = extraH2 * 1.9;
        avgW = 54 + extraW;
        if (w > avgW) {
            printf("Weight: Too Heavy\n");
        } else {
            printf("Weight: Average\n");
        }
    } else if (g == 'f' || g == 'F') {
        extraH1 = h - 150;
        extraH2 = extraH1 / 2.5;
        extraW = extraH2 * 1.7;
        avgW = 49 + extraW;
        if (w > avgW) {
            printf("Weight: Too Heavy\n");
        } else {
            printf("Weight: Average\n");
        }
    }
}
