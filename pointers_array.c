#include<stdio.h>
  int main()
  {
    //For pointers to array
    int arr[3] = {1,2,3};     
   int (*p)[3] = &arr;
   printf("%d %d %d\n", (*p)[0], (*p)[1], (*p)[2]);
    // For array to pointers
    int a = 10, b = 20, c = 30;
    int *pa[3] = {&a, &b, &c}; 
    printf("%d %d %d\n", *pa[0], *pa[1], *pa[2]);
    return 0; 
  }