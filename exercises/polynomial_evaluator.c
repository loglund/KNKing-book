#include <stdio.h>

int evaluate_polynomial(int coeff[], int coeff_len, int x) {
    int result = coeff[0];
    int temp;
    for (int i = 1; i < coeff_len; i++)
    {
        temp = coeff[i];
        for (int j = 0; j < i; j++)
        {
            temp *= x;
        }
        result += temp;
    }
    return result;
}

int main(void)
{
    int degree;
    int result;
    int x;

    printf("Enter the degree of your polynomial:");
    scanf("%d", &degree);

    int len = degree + 1;
    int coeff[len];

    printf("Enter the coefficients:");
    for (int i = 0; i < degree + 1; i++)
    {
        scanf("%d", &coeff[i]);
    }

    printf("f(x) = %d + ", coeff[0]);
    for (int i = 1; i < degree + 1; i++)
    {
        if (i == degree)
        {
            printf("%dx^%d\n", coeff[i], i);
        }
        else
        {
            printf("%dx^%d + ", coeff[i], i);
        }
    }
    printf("Enter the x-value to evaluate the polynomial in:");
    scanf("%d", &x);
    result = evaluate_polynomial(coeff, len, x);
    printf("The result is f(%d) = %d\n", x, result);

    return 0;
}
