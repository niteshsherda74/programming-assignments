#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

void primeFactors(int n) {
    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square root: %.2f\n", sqrt(n));
    printf("Square: %d\n", n * n);
    printf("Cube: %d\n", n * n * n);

    if(isPrime(n))
        printf("Prime: Yes\n");
    else
        printf("Prime: No\n");

    printf("Factorial: %lld\n", factorial(n));

    printf("Prime Factors: ");
    primeFactors(n);

    return 0;
}
