//Write a C program to add two numbers, take number from user
#include<stdio.h>
   int main()
   {
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1,&num2);
    int sum = num1+num2;
    printf("The sum of the two numbers entered is %d", sum);
    return 0;
   }