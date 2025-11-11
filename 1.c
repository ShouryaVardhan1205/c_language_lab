//Write a program to create a new file and write text into it. 

/*#include<stdio.h>
   int main()
   {
    FILE *a = fopen("Shourya.txt", "w");
    fprintf(a, "Shourya Vardhan");
    fclose(a);

    return 0;
   }*/

#include <stdio.h>

int main() {
    FILE *a = fopen("SHourya.txt", "w");
    char s[10];

    fgets(s, 10, stdin);   // take input safely

    fputs(s, a);           // write to file

    fclose(a);
    return 0;
}