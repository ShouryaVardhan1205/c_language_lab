//Write a program that prompts the user to enter their name and age
#include<stdio.h>
    int main()
    {
     char name[100];
     int age;
     printf("Enter your name:\n");
     scanf("%s", &name);
     printf("Enter your age:\n");
     scanf("%d", &age);
     printf("Your name is %s.\n And your age is %d", name,age);
          return 0;
    }