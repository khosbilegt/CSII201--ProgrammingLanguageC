 #include <stdio.h>

int main() {

    int n, m, p, q;
    printf("Insert year: ");
    scanf("%d", &n);
    printf("a = %d\n", n);
    
    m = n % 400;
    p = n % 4;
    q = n % 100;
    
    if (m == 0)
        printf("Leap Year\n");
        else if (p == 0 && q != 0)
            printf("Leap Year\n");
        else printf("Regular Year\n");
}

