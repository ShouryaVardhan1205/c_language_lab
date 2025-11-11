/*	Open an existing file and read its content 
character by character, and then close the file.*/
#include<stdio.h> 
   int main()
   {
    FILE *a = fopen("Shourya.txt", "r");
    int c; 
    while((c = fgetc(a)) != EOF)
    putchar(c);
    fclose(a);

    return 0;
   }