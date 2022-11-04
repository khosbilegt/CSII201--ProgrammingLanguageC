/*
#include <stdio.h>
int isValid(char pwd[]);
void errorReason(int n);

int main() {
    char pwd[20] = {0};
    
    scanf("%s", pwd);
    int result = isValid(pwd);
    errorReason(result);
    
}

int isValid(char pwd[]) {
    // 1. Length Check
    int counter = 0, cap = 0, num = 0, sym = 0;
    
    for (int i = 0; i < 20; i++) {
        if (pwd[i] != 0) {
            counter = counter + 1;
        }
    }
    
    // 2. Capital Check
    for (int i = 0; i < 20; i++) {
        if (pwd[i] >= 'A' && pwd[i] <= 'Z') {
            cap = cap + 1;
        }
    }
    
    // 3. Number Check
    for (int i = 0; i < 20; i++) {
        if (pwd[i] >= '0' && pwd[i] <= '9') {
            num = num + 1;
        }
    }
    
    // 4. Symbol Check
    for (int i = 0; i < 20; i++) {
        if (pwd[i] == '?' || pwd[i] == '!' || pwd[i] == '$' || pwd[i] == '*' || pwd[i] == '(' || pwd[i] == ')' || pwd[i] == '-' || pwd[i] == '+') {
            sym = sym + 1;
        }
    }
    
    if (counter < 6) {
        return 1;
    } else if (cap < 1) {
        return 2;
    } else if (num < 3) {
        return 3;
    } else if (sym < 1) {
        return 4;
    } else {
        return 0;
    }
}

void errorReason(int n) {
    switch (n) {
        case 1:
            printf("Password must be at least 6 characters long...\n");
            break;
        case 2:
            printf("Password must contain at least 1 capital letter...\n");
            break;
        case 3:
            printf("Password must contain at least 3 numbers...\n");
            break;
        case 4:
            printf("Password must contain at least one of the symbols: ?, !, $, , ∗, (, ), –, +...\n");
            break;
        default:
            printf("Your password is valid...\n");
    }
}
*/
