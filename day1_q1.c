#include <stdio.h>
int main()
{
    int num1;
    int num2;

    printf("enter num 1:\n");
    scanf("%d", &num1);
    printf("enter num2:\n");
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("the sum  of the numbers is: %d", sum);
    return 0;
}
