#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient =  num1 / num2;  
    printf("\nSum = %d", sum);
    printf("\nDifference = %d", difference);
    printf("\nProduct = %d", product);
    printf("\nQuotient = %.2f\n", quotient);   

    return 0;
}
