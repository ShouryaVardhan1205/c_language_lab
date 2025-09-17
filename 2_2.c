/*WAP a C program to Convert temperature from Celsius to Fahrenheit using the
formula: F = (C * 9/5) + 32.*/
#include<stdio.h>
    int main()
    {
     float c,f;//Here c represents degree celsiusand f is for fahrenheit.
     printf("Enter value in degree celsius:\n");
     scanf("%f", &c);
     f = (c*9.0/5.0)+32.0;
     printf("The fahrenheit value is %f:\n", f);

        return 0;
    }