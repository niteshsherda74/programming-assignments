#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;
    char doj[15];
    float salary;
};

int main() {
    int n, i;
    int maleCount = 0, femaleCount = 0;
    int asstManagerCount = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];

    for (i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);
        printf("Name: "); scanf("%s", emp[i].name);
        printf("Designation (e.g., Asst_Manager): "); scanf("%s", emp[i].designation);
        printf("Gender (M/F): "); scanf(" %c", &emp[i].gender);
        printf("DOJ (DD/MM/YYYY): "); scanf("%s", emp[i].doj);
        printf("Salary: "); scanf("%f", &emp[i].salary);
    }

    printf("\n--- RESULTS ---\n");

    printf("Total Employees: %d\n", n);

    printf("Employees with Salary > 10,000:\n");

    for (i = 0; i < n; i++) {
        if (emp[i].gender == 'M' || emp[i].gender == 'm') maleCount++;
        else if (emp[i].gender == 'F' || emp[i].gender == 'f') femaleCount++;

        if (emp[i].salary > 10000) {
            printf(" - %s (%.2f)\n", emp[i].name, emp[i].salary);
        }

        if (strcmp(emp[i].designation, "Asst_Manager") == 0) {
            asstManagerCount++;
        }
    }

    printf("Male Employees: %d | Female Employees: %d\n", maleCount, femaleCount);
    printf("Employees with designation 'Asst_Manager': %d\n", asstManagerCount);

    return 0;
}
