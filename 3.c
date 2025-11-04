/*Write a function that accepts pointers as parameters.
 Pass variables by reference using pointers and modify 
 their values within the function.*/

 #include <stdio.h>
// Function that accepts pointers and modifies the values
void modifyValues(int *x, int *y)
{
    *x = *x + 10;  // increase value of x by 10
    *y = *y * 2;   // double the value of y
}

int main()
{
    int a = 5, b = 7;

    printf("Before function call:\n");
    printf("a = %d, b = %d\n", a, b);

    modifyValues(&a, &b);  // passing addresses of a and b

    printf("After function call:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
