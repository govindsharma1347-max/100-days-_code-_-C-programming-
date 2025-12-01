#include <stdio.h>
int main(){
    int length , breadth;
    printf("enter length:");
    scanf("%d" , &length);
    printf("enter breadth:");
    scanf("%d", &breadth);
    int area = length*breadth;
    int perimeter = 2* ( length + breadth) ;
    printf(" the perimeter of rectangle is %d: \n" ,  perimeter);
    printf(" the  area of rectangle is %d: \n" , area);
    return 0;
    
}