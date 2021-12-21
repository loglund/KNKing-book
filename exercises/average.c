#include <stdio.h>

double average(double a, double b) {
    return (a + b) / 2;
}

int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("The average is %.2f\n", average(a, b));
    return 0;
}
