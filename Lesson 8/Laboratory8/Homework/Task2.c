/*
#include <stdio.h>

int main() {
    char arr[100];
    int check, vowel = 0, maxVowel = 0;
    printf("Enter sentence: ");
    scanf("%[^'\n']s", arr);
    printf("%s\n", arr);
    
    for (check = 0; check < 100; check++) {
        
        if (arr[check] == 'A' || arr[check] == 'a' || arr[check] == 'E' || arr[check] =='e' || arr[check] == 'I' || arr[check] == 'I' || arr[check] == 'O' || arr[check] == 'o' || arr[check] == 'U' || arr[check] == 'u') {
            vowel++;
        }
        
        
        if (vowel > maxVowel) {
            maxVowel = vowel;
        }
        
        if (arr[check] == ' ') {
            vowel = 0;
        }
    }
    
    printf("Max vowels: %d\n", maxVowel);
}
*/
