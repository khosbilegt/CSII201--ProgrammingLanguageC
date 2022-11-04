/*
#include <stdio.h>

int main() {
    int n, k = 0, m, a = 1, b = 1, z = 0;
    
    printf("Input number of elements: ");
    scanf ("%d", &n);
    
    if (n < 100 && n >= 1) {
        
        int c[n];
        
        while (k != n) {
            m = k + 1;
            printf("Input %dth number: ", m);
            scanf("%d", &c[k]);
            printf("%dth number is: %d\n", m, c[k]);
            k++;
        }
        
        while ((a == 1 || b == 1) && z < n - 1) {
            if (c[z] < c[z+1]) {
                b = 0;
            } else if (c[z] > c[z+1]) {
                a = 0;
            }
            z++;
        }
        
        if (a == 1) {
            printf("Usuh.\n");
        } else if (b == 1) {
            printf("Buurah.\n");
        } else
            printf("Erembleegui.\n");

          return 0;
        
    } else {
        printf("n must be 1 <= n < 100 \n");
    }
}
*/
