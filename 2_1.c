/*WAP a C program to calculate the area and perimeter of a rectangle based on its
length and width.*/
#include<stdio.h>
    int main()
    {
     float length, width;
     printf("Enter the length of the rectangle:\n");
     scanf("%f", &length);
     printf("Enter the width of the rectangle:\n");
     scanf("%f", &width);
     float area = length*width, perimeter = 2*(length+width);
     printf("The area of the rectangle is: %.2f. \n And the perimeter of the rectangle is: %.2f.", area, perimeter);

        return 0;
    }
