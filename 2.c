/*Perform pointer arithmetic (increment and decrement) 
on pointers of different data types.
 Observe how the memory addresses change and the effects on data access.*/
 #include <stdio.h>

int main()
{
    int a[3] = {10, 20, 30};
    int *p = a;

    printf("Address = %p, Value = %d\n", p, *p);

    p++;  // move to next element
    printf("After increment: Address = %p, Value = %d\n", p, *p);

    p--;  // move back to previous element
    printf("After decrement: Address = %p, Value = %d\n", p, *p);

    return 0;
}           