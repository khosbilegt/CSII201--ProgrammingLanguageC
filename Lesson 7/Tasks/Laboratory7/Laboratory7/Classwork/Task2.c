/*
#include <stdio.h>

int main() {
    int students, sent, Nth, counter = 0;

    printf("Input number of students: ");
    scanf("%d", &students);
    
    float arr[students], sum = 0, average;
    
    if (students >= 1 && students < 100) {
        
        for (sent = 0; sent < students; sent++) {
            Nth = sent + 1;
            printf("Enter %dth Student's Height: ", Nth);
            scanf("%f", &arr[sent]);
            sum = sum + arr[sent];
        }
        
        average = sum / students;
        printf("Average: %f\n", average);
        
        for (sent = 0; sent < students; sent++) {
            if (arr[sent] > average) {
                counter ++;
            }
        }
        
        printf("Number of tall students: %d\n", counter);
        
    } else {
        printf("Number of students must be equal to or more than 1 and less than 100\n");
    }
}
*/
