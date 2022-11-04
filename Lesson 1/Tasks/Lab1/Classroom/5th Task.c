#include <stdio.h>

int main()
{
    
    int a, b, c, d, e, g;
    float f, h;

    printf("a тоог оруулна уу: ");
    scanf("%d", &a);
    printf("b тоог оруулна уу: ");
    scanf("%d", &b);
    
    c=a+b;
    printf("a + b = %d\n", c);
    
    d=a-b;
    printf("a - b = %d\n", d);
    
    e=a*b;
    printf("a * b = %d\n", e);
    
    
    // "b" float болох ёстой байсан тул "h"-тай тэнцүүлж, "h" ашигласан
    h = b;
    f=a/h;
    printf("a / b = %.2f\n", f);

    g=a%b;
    printf("a %% b = %d\n", g);
  
    return 0;
}
