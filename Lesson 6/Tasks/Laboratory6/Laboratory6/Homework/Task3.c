#include <stdio.h>

int main() {
    int m, k, n, order = 1, ri, rj, rf;
    
    printf("Enter m (ailiin too): ");
    scanf("%d", &m);
    printf("Enter k (ortsiin too): ");
    scanf("%d", &k);
    printf("Enter n (davhariin too): ");
    scanf("%d", &n);
    
    int arr[m][k][n];
    
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int f = 0; f < m; f++) {
                arr[i][j][f] = order;
                ri = i + 1;
                rj = j + 1;
                rf = f + 1;
                printf("%d ortsnii %d davhriin %d toot\n", ri, rj, rf);
            }
        }
    }
}
