/*
#include <stdio.h>

struct Student {
    char fName[20], lName[20], ID[10];
    float golch;
};
void readStudent(struct Student *s);
void printStudent(struct Student s);
void setfName(struct Student *p, char ner[]);
void setlName(struct Student *p, char ovog[]);
void setID(struct Student *p, char ID[]);
void setGolch(struct Student *p, float golch);

int main() {
    struct Student bat, t;
    readStudent(&bat);
    printStudent(bat);
    setfName(&t, "dorj");
    setlName(&t, "bold");
    setID(&t, "1324");
    setGolch(&t, 3);
    printStudent(t);
    return 0;
}

void readStudent(struct Student *s) {
    printf("Enter First Name: ");
    scanf("%s", s->fName);
    printf("Enter Last Name: ");
    scanf("%s", s->lName);
    printf("Enter ID: ");
    scanf("%s", s->ID);
    printf("Enter Golch: ");
    scanf("%f", &s->golch);
}

void printStudent(struct Student s) {
    printf("First Name: %s\nLast Name: %s\nID: %s\nGolch: %f\n", s.fName, s.lName, s.ID, s.golch);
}
void setfName(struct Student *p, char ner[]) {
    for(int i = 0; i < 20; i++) {
        p->fName[i] = ner[i];
    }
}
void setlName(struct Student *p, char ovog[]) {
    for(int i = 0; i < 20; i++) {
        p->lName[i] = ovog[i];
    }
}
void setID(struct Student *p, char id[]) {
    for(int i = 0; i < 10; i++) {
        p->ID[i] = id[i];
    }
}
void setGolch(struct Student *p, float golch) {
    p->golch = golch;
}
*/
