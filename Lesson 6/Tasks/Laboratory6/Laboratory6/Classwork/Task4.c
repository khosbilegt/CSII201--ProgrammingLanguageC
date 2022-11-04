/*
#include <stdio.h>

int main() {
    
    int n, k = 0, m, exists, x;
    
    printf("Input number of elements: ");
    scanf ("%d", &n);
    
    if (n < 100 && n >= 1) {
    
        int a[n];
        
        while (k != n) {
            m = k + 1;
            printf("Input %dth number: ", m);
            scanf("%d", &a[k]);
            printf("%dth number is: %d\n", m, a[k]);
            k++;
        }
        
        printf("Input number to search: ");
        scanf("%d", &x);
        
        
        exists = 0;
        
        
        for(k = 0; k < n; k++) {
            if(a[k] == x)
            {
                exists = 1;
                break;
            }
        }
        
        
        if (exists == 1)
            {
                printf("%d\n", k + 1);
            }
            else
            {
                printf("-1\n");
            }

            return 0;
        
    } else {
        printf("n must be 1 <= n < 100 \n");
    }
}
*/
