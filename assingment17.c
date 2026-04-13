#include <stdio.h>
#include <math.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    double x, sum = 0, term;
    int n, i;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int power = 2 * i + 1;
        term = pow(x, power) / factorial(power);

        if (i % 2 == 0) {
            sum += term;
        } else {
            sum -= term;
        }
    }

    printf("Sum of sine series = %lf\n", sum);

    return 0;
}
