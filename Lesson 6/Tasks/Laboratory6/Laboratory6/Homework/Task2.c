/*
#include <stdio.h>

int main() {
    int n, i, j, rowSum, colSum, diag, diagSum = 0;
    
    printf("Input n: ");
    scanf("%d", &n);
    
    int arr[n][n];
    
    for(i = 0; i < n; i++) {
       for(j = 0; j < n;j++) {
          printf("Enter value for arr[%d][%d]:", i, j);
          scanf("%d", &arr[i][j]);
       }
    }
    
    for(i = 0; i < n; i++)
        {
            rowSum=0;
            for(j = 0;j< n;j++)
            {
                printf("%d\t",arr[i][j]);
                rowSum += arr[i][j];
            }
            printf("\tRow Sum : %d",rowSum);
            printf("\n");
        }
    
    printf("\n");
    
    
    for(j = 0; j < n; j++)
        {
            colSum=0;
            for(i = 0; i < n; i++)
            {
                printf("%d\t", arr[i][j]);
                colSum += arr[i][j];
            }
            printf("\tColumn Sum : %d",colSum);
            printf("\n");
        }

    for(diag = 0; diag < n; diag++)
          {
               diagSum = diagSum + arr[diag][diag];
          }
    printf("Diagonal Sum: %d\n", diagSum);
}
*/
