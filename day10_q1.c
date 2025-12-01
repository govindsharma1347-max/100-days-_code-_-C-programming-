#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter side lengths of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid side lengths\n");
    } else if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }
    return 0;
}