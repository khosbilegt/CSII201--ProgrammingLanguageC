/*
 #include <stdio.h>

int main() {
   int m = 0, n, i, k;
   printf("Enter number: ");
   scanf("%d", &n);
    
   while (m < n) {
      k = 0;

      if (m <= 1) {
         ++m;
         continue;
      }

      for (i = 2; i <= m / 2; ++i) {

         if (m % i == 0) {
            k = 1;
            break;
         }
      }

      if (k == 0)
         printf("%d ", m);
      ++m;
   }
    
    printf("\n");
   return 0;
}

*/
