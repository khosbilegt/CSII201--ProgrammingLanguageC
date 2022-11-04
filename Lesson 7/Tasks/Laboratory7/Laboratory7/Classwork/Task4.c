/*
#include <stdio.h>

int main() {
    int n, m, sent, sent2, show1, show2, max = 0, maxc, maxr;
    
    printf("Enter number of columns: ");
    scanf("%d", &n);
    printf("Columns: %d\n", n);
    
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Rows: %d\n", m);
    
    int arr[n][m];
    
    for (sent = 0; sent < m; sent++) {
        
        show1 = sent + 1;
        
        for (sent2 = 0; sent2 < n; sent2++) {
            show2 = sent2 + 1;
            printf("%d Row %d Column element: ", show1, show2);
            scanf("%d", &arr[sent2][sent]);
        }
    }
    
    
    for (sent = 0; sent < m; sent++) {
        int check = 0;
        for (sent2 = 0; sent2 < n; sent2++) {
            if (arr[sent2][sent] % 2 == 0) {
                check = check + 1;
            }
            
            if (check > max) {
                max = check;
                maxc = sent2 + 1;
            }
        }
        
 
    }
    
    printf("Max Even Column is: %d\n", maxc);
}
*/
