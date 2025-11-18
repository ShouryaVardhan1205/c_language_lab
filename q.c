/*Write a C program to create a structure taking roll number and name
 of student and save it into a file, create the file if it does not exist.*/

 #include <stdio.h>
 struct student {
    int roll;
    char name[50];
};
int main() {
    struct student s;
    FILE *f = fopen("details.txt", "a");
    printf("Roll: ");
    scanf("%d", &s.roll);
    printf("Name: ");
    scanf("%s", s.name);
    fprintf(f, "%d %s\n", s.roll, s.name);
    fclose(f);
    return 0;
}