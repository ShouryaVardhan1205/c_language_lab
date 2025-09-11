//Q. To check weather the number is even or odd.
#include<stdio.h>
    int main()
    {
     int num; // The no. to be checked as even or odd.
     printf("Enter number:");
     scanf("%d", &num);
     if(num%2== 0)
     {
        printf("The no. is even.\n");
     }
     else 
     {
        printf("The no. is odd.\n");
     }

        return 0;    
    }