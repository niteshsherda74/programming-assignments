#include <stdio.h>

typedef struct student {
    char name[50];
    int marks[5];
    float percentage;
} student;

int main() {
    int i, j, n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    student S[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %[^\n]", S[i].name);

        printf("Enter marks of 5 subjects:\n");
        for(j = 0; j < 5; j++) {
            scanf("%d", &S[i].marks[j]);
        }

        // Calculate percentage
        int sum = 0;
        for(j = 0; j < 5; j++) {
            sum += S[i].marks[j];
        }
        S[i].percentage = sum / 5.0;
    }

    printf("\n--- RESULT ---\n");

    for(i = 0; i < n; i++) {
        int pass = 1;

        for(j = 0; j < 5; j++) {
            if(S[i].marks[j] < 40) {
                pass = 0;
                break;
            }
        }

        printf("\nName: %s", S[i].name);
        printf("\nPercentage: %.2f", S[i].percentage);

        if(pass == 0) {
            printf("\nResult: Fail");
        } else {
            // Grade classification
            if(S[i].percentage > 75)
                printf("\nGrade: Distinction");
            else if(S[i].percentage >= 60)
                printf("\nGrade: First Division");
            else if(S[i].percentage >= 50)
                printf("\nGrade: Second Division");
            else if(S[i].percentage >= 40)
                printf("\nGrade: Third Division");
        }

        printf("\n----------------------\n");
    }

    return 0;
}
