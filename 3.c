/*Open a file, read its content line by line,
 and display each line on the console.*/
 #include<stdio.h>
    int main()
    {
     FILE *a = fopen("Shourya.txt", "r");
     char s[50];
     while (fgets(s, 50, a))
     puts(s);
     fclose(a);

        return 0; 
    }