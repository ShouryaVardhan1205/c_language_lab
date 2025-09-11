#include<stdio.h>
   int main()
   {
    int year;
    printf("Enter the year:"); //Takes the input for the year that user wants to check weather it is leap or not.
    scanf("%d", &year);

    if(year%400==0)
    {
        printf("This year entered is a leap year.\n");
    }
    
    else if(year%100==0)
    {
        printf("The year entered is not a leap year.\n");
    }

    else if(year%4==0)
    {
        printf("The year entered is a leap year");
    }

    else 
    {
        printf("The year entered is not a leap year");
    }
     

   return 0;
   }