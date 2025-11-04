/*   Declare a static local variable inside a function. 
Observe how its value persists across function calls.*/
#include <stdio.h>
void function();

int main()
{
    function();
    function();
    function();
    return 0;
}

void function()
{
    int a, b;
    static int sum = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum += a + b;
    printf(" sum = %d\n", sum);
}

