#include<stdio.h>

typedef struct student {
    char name[50];
    int PRN, M1, M2, M3;
    float percentage;
} student;

int main() {
    int i, n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    student S[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", S[i].name);

        printf("PRN: ");
        scanf("%d", &S[i].PRN);

        printf("Marks (3 subjects): ");
        scanf("%d %d %d", &S[i].M1, &S[i].M2, &S[i].M3);

        S[i].percentage = (S[i].M1 + S[i].M2 + S[i].M3) / 3.0;
    }
    
    printf("\n--- STUDENT RESULTS ---\n");

    for(i = 0; i < n; i++) {
        printf("\nName: %s", S[i].name);
        printf("\nPRN: %d", S[i].PRN);
        printf("\nPercentage: %.2f", S[i].percentage);
        
        if(S[i].percentage >= 75){
            printf("\nResult: Distinction");
        }
        else if(S[i].percentage >= 60){
            printf("\nResult: First Class");
        }
        else if(S[i].percentage >= 50){
            printf("\nResult: Second Class");
        }
        else if(S[i].percentage >= 40){
            printf("\nResult: Pass");
        }
        else{
            printf("\nResult: Fail");
            
        }
    }
    return 0;
}
