#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int n, i;
    srand(time(0)); 

    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    printf("Pseudo Random Numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rand());
    }

    printf("\n");
    return 0;
}
