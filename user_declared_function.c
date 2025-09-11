#include<stdio.h>
  
void add(int ,int );    
int main()
    {
        int n1,n2;
        printf("Enter the first number:\n");
        scanf("%d", &n1);
        printf("Enter the second number:\n");
        scanf("%d", &n2);
        add(n1,n2);
    return 0;
    }
  void add(x,y)
  {
    int sum;
    sum = x+y;
    printf("The sum of the two numbers is:%d\n", sum);
  }
    