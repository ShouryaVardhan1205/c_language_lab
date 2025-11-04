#include <stdio.h>
#include <string.h>

struct Student{      
    int roll;            
    char name[50];
};

int main(){
    struct Student student1;
    student1.roll = 590022797;
    strcpy(student1.name, "Shourya");

    printf("roll : %d\n", student1.roll);
    printf("Name : %s\n", student1.name);


    return 0;
}   