/*
#include <stdio.h>
#include <string.h>

int passCheck(char user[20], char pass[20]);

int main() {
    char user[20], pass[20];
    printf("Enter username: ");
    scanf("%s", user);
    printf("Enter password: ");
    scanf("%s", pass);
    int result = passCheck(user, pass);
    if (result == 1) {
        printf("Logging in...\n");
    } else {
        printf("Incorrect username or password...\n");
    }
    return 0;
}

int passCheck(char user[20], char pass[20]) {
    if (strcmp(user, "bat") == 0) {
        char passSaved[] = "123456";
        if (strcmp(pass, passSaved) == 0) {
            return 1;
        } else {
            return 0;
        }
    } else if (strcmp(user, "dorj") == 0) {
        char passSaved[] = "password";
        if (strcmp(pass, passSaved) == 0) {
            return 1;
        } else {
            return 0;
        }
    } else if (strcmp(user, "bold") == 0) {
        char passSaved[] = "pass247";
        if (strcmp(pass, passSaved) == 0) {
            return 1;
        } else {
            return 0;
        }
    } else if (strcmp(user, "tsetsgee") == 0) {
        char passSaved[] = "justinbeaber";
        if (strcmp(pass, passSaved) == 0) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
*/
