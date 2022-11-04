#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i;
    int k=0;
    scanf("%d", &n);
    for(i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            k=1;
            break;
        }
    }
    if (k==0) printf("prime number\n");
    else printf("not prime number\n");
    return 0;
}
