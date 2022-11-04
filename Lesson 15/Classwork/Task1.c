#include <string.h>
#include <stdio.h>
void summa(int *a, int *b);
int main() {
    char word[100];     scanf("%s", word);     int length = strlen(word);     int counter = 0;     if (length > 8) {         for (int i = 0; i < length; i++) {             if (word[i] == '1' || word[i] == '2' || word[i] == '3' || word[i] == '4' || word[i] == '5' || word[i] == '6' || word[i] == '7' || word[i] == '8' || word[i] == '9' || word[i] == '0') {                 counter = counter + 1;             }         }     }     if (counter > 0) {         printf("Valid\n");     } else {         printf("Invalid\n");     }
}
void summa(int *a, int *b) {  int sum = *a + *b;     printf("%d\n", sum);}
