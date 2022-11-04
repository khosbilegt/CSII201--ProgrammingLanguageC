#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2, x3, y3, x12, x22, x32, y12, y22, y32;
    int co1, co2, co3;
    float coordinate1, coordinate2, coordinate3;
    
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("x1 = %d\n", x1);
    
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("y1 = %d\n", y1);
    
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("x2 = %d\n", x2);
    
    printf("Enter y2: ");
    scanf("%d", &y2);
    printf("y2 = %d\n", y2);
    
    printf("Enter x3: ");
    scanf("%d", &x3);
    printf("x3 = %d\n", x3);
    
    printf("Enter y3: ");
    scanf("%d", &y3);
    printf("y3 = %d\n", y3);
    
    x12 = x1*x1;
    x22 = x2*x2;
    x32 = x3*x3;
    
    y12 = y1*y1;
    y22 = y2*y2;
    y32 = y3*y3;
    
    co1 = x12*y12;
    co2 = x22*y22;
    co3 = x32*y32;
    
    coordinate1 = sqrt(co1);
    coordinate2 = sqrt(co2);
    coordinate3 = sqrt(co3);
    
    if (coordinate1 > coordinate2 && coordinate1 > coordinate3)
        printf("Coordinate 1 хамгийн хол\n");
        else if (coordinate2 > coordinate1 && coordinate2 > coordinate3)
            printf("Coordinate 2 хамгийн хол\n");
            else if (coordinate3 > coordinate1 && coordinate3 > coordinate2)
                printf("Coordinate 3 хамгийн хол\n");
                else if (coordinate1 == coordinate2 && coordinate1 > coordinate3)
                    printf("Coordinate 1 ба 2 хамгийн хол\n");
                    else if (coordinate2 == coordinate3 && coordinate2 > coordinate1)
                        printf("Coordinate 2 ба 3 хамгийн хол\n");
                        else if (coordinate1 == coordinate3 && coordinate1 > coordinate3)
                            printf("Coordinate 1 ба 3 хамгийн хол\n");
    else
        printf("Бүх координатууд адил зайтай\n");
        
    
    if (coordinate1 < coordinate2 && coordinate1 < coordinate3)
        printf("Coordinate 1 хамгийн ойр\n");
        else if (coordinate2 < coordinate1 && coordinate2 < coordinate3)
            printf("Coordinate 2 хамгийн ойр\n");
            else if (coordinate3 < coordinate1 && coordinate3 < coordinate2)
                printf("Coordinate 3 хамгийн ойр\n");
                else if (coordinate1 == coordinate2 && coordinate1 < coordinate3)
                    printf("Coordinate 1 ба 2 хамгийн ойр\n");
                    else if (coordinate2 == coordinate3 && coordinate2 < coordinate1)
                        printf("Coordinate 2 ба 3 хамгийн ойр\n");
                        else if (coordinate1 == coordinate3 && coordinate1 < coordinate3)
                            printf("Coordinate 1 ба 3 хамгийн ойр\n");
}

