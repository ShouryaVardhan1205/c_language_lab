//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include<stdio.h>
     int main()
     {
      int a; //Declaring a as an integer value.
      printf("Enter any integer number:");
      scanf("%d",&a);
      if(a%2==0)
      {
        printf("The entered integer number is even");
      }
      else
      {
        printf("The entered integer number is odd");
      }
       
        return 0;
     }