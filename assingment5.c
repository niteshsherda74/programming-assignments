#include <stdio.h>

void matrixAddition();
void findSaddlePoint();
void findInverse2x2();
void checkMagicSquare();

int main() {
    int choice;
    while(1) {
        printf("\n--- Matrix Operations Menu ---");
        printf("\n1. Addition of two matrices");
        printf("\n2. Saddle point of a matrix");
        printf("\n3. Inverse of a 2x2 matrix");
        printf("\n4. Magic square check");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: matrixAddition(); break;
            case 2: findSaddlePoint(); break;
            case 3: findInverse2x2(); break;
            case 4: checkMagicSquare(); break;
            case 5: return 0;
            default: printf("Invalid choice!");
        }
    }
}

// 1. Addition of Matrices
void matrixAddition() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];
    
    printf("Enter elements of Matrix A:\n");
    for(i=0; i<r; i++) for(j=0; j<c; j++) scanf("%d", &a[i][j]);
    
    printf("Enter elements of Matrix B:\n");
    for(i=0; i<r; i++) for(j=0; j<c; j++) scanf("%d", &b[i][j]);

    printf("Resultant Matrix:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// 2. Saddle Point (Min in Row, Max in Col)
void findSaddlePoint() {
    int n, i, j, k, min_row, col_ind, flag = 0;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    int mat[n][n];
    
    printf("Enter elements:\n");
    for(i=0; i<n; i++) for(j=0; j<n; j++) scanf("%d", &mat[i][j]);

    for(i=0; i<n; i++) {
        min_row = mat[i][0];
        col_ind = 0;
        for(j=1; j<n; j++) {
            if(mat[i][j] < min_row) {
                min_row = mat[i][j];
                col_ind = j;
            }
        }
        for(k=0; k<n; k++) {
            if(mat[k][col_ind] > min_row) break;
            if(k == n-1) {
                printf("Saddle Point found: %d\n", min_row);
                flag = 1;
            }
        }
    }
    if(!flag) printf("No Saddle Point exists.\n");
}

// 3. Inverse of 2x2 Matrix
void findInverse2x2() {
    float a[2][2], det;
    printf("Enter elements of 2x2 matrix:\n");
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) scanf("%f", &a[i][j]);

    det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);

    if(det == 0) {
        printf("Inverse does not exist (Determinant is 0).\n"); 
    } else {
        printf("Inverse Matrix:\n");
        printf("%.2f  %.2f\n", a[1][1]/det, -a[0][1]/det);
        printf("%.2f  %.2f\n", -a[1][0]/det, a[0][0]/det);
    }
}

// 4. Magic Square Check
void checkMagicSquare() {
    int n, i, j, sumD1=0, sumD2=0, flag=0;
    printf("Enter order of matrix: ");
    scanf("%d", &n);
    int mat[n][n], rowSum[n], colSum[n];

    printf("Enter elements:\n");
    for(i=0; i<n; i++) {
        rowSum[i] = 0;
        for(j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            rowSum[i] += mat[i][j];
            if(i == j) sumD1 += mat[i][j];
            if(i + j == n - 1) sumD2 += mat[i][j];
        }
    }

    for(j=0; j<n; j++) {
        colSum[j] = 0;
        for(i=0; i<n; i++) colSum[j] += mat[i][j];
    }

    for(i=0; i<n; i++) {
        if(rowSum[i] != sumD1 || colSum[i] != sumD1) flag = 1;
    }
    
    if(flag == 0 && sumD1 == sumD2) printf("It is a Magic Square.\n");
    else printf("Not a Magic Square.\n");
}
