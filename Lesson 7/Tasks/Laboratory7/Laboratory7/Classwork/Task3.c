/*
#include <stdio.h>

int main() {
    int n, sent, Nth;
    
    printf("Input n: ");
    scanf("%d", &n);
    
    int arr[n];
    
    if (n >= 1 && n < 100) {
        
        for (sent = 0; sent < n; sent++) {
            Nth = sent + 1;
            printf("Enter %dth number: ", Nth);
            scanf("%d", &arr[sent]);
        }
        
        for (int sent = 0, Xth = n - 1; sent < Xth; sent++, Xth--) {
            if (arr[sent] != arr[Xth]) {
                printf("This array is not symmetric\n");
                return 0;
            }
        }
        
        printf("Array is symmetric\n");
        
    } else {
        printf("N must be equal to or more than 1 and less than 100\n");
    }
}
*/
