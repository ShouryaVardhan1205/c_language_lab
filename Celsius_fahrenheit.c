#include<stdio.h>
  int main()
  {

    float c;
  
    printf("Enter the value in degree celsius:");
    scanf("%f", &c);
      float f = (9.0/5.0*c)+32.0;
    printf("The value in fahrenheit is:%f",f);

    return 0;
  }