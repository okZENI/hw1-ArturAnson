#include <stdio.h>
#include <math.h>

int main() {
    double A, H, C, x, y;
    int N;
    do {
        printf("Enter the starting value A: ");
        scanf("%lf", &A);

        printf("Enter the step H: ");
        scanf("%lf", &H);

        printf("Enter the coefficient C: ");
        scanf("%lf", &C);

        printf("Enter the number of steps N: ");
        scanf("%d", &N);

        if (H <= 0 || C < 1 || N <= 0) {
            printf("Invalid input! Ensure that H > 0, C >= 1, and N > 0.\n");
        }
    } while (H <= 0 || C < 1 || N <= 0);  
    printf("\n  x       |  y = f(x) \n");
    printf("-------------------------\n");

    for (int i = 0; i < N; i++) {
        x = A + H * pow(C, i);

        if (x == 0 || 4 + x < 0) {
            if (x == 0) {
                printf("%8.2f | not available (division by zero)\n", x);
            } else {
                printf("%8.2f | complex number\n", x);
            }
        } else {
            y = 1 / (x * x) + x / sqrt(4 + x);
            printf("%8.2f | %8.2f\n", x, y);
        }
    }

    return 0;
}
