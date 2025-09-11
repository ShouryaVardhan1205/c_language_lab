#include <stdio.h>

int main()
{

    int num1;
    int num2;
    int sum;

    printf("Enter num1:");
    scanf("%d", &num1);
    printf("Enter num2:");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum of num1 and num2 is:%d", sum);

    return 0;
}
