#include <stdio.h>

int smallestDivisor(int n) {
    if(n < 0) n = -n;
    if(n == 0) return 0;
    for(int i = 2; i <= n; i++) {
        if(n % i == 0)
            return i;
    }
    return n;
}

int gcd(int a, int b) {
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Smallest divisor of %d: %d\n", a, smallestDivisor(a));
    printf("Smallest divisor of %d: %d\n", b, smallestDivisor(b));

    printf("GCD of %d and %d: %d\n", a, b, gcd(a, b));

    return 0;
}
