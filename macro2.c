#include<stdio.h>
#define DEBUG

int main()
{
#ifdef DEBUG
    printf("Debug\n");
#endif

    printf("Pr....\n");
    return 0;
}