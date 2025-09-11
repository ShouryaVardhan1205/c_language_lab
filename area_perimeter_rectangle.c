#include<stdio.h>

int main(){	

    float length;
    float breadth;
   
    printf("Enter length:");
    scanf("%f", &length);
    printf("Enter breadth:");
    scanf("%f", &breadth);
    float perimeter = 2*(length+breadth);
    float area = length*breadth;

    printf("The perimeter of the rectangle is:%f",perimeter);
    printf("The area of the rectangle is:%f",area );

return 0;
}