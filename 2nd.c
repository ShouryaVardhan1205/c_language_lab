/*Write a C program to compute the monthly pay of 100 employees 
using each employee‗s name, basic pay. The DA is computed as 52% of the basic pay.
Gross-salary (basic pay + DA). Print the employees name and gross salary.*/
#include <stdio.h>
struct Employee {
    char name[50];
    float basic_pay;
    float da;
    float gross_salary;
};
int main() {
    struct Employee emp[100];
    int i;
    for(i = 0; i < 100; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", emp[i].name);
        printf("Enter basic pay of %s: ", emp[i].name);
        scanf("%f", &emp[i].basic_pay);

        emp[i].da = 0.52 * emp[i].basic_pay;
        emp[i].gross_salary = emp[i].basic_pay + emp[i].da;
    }

    printf("\nEmployee Name\tGross Salary\n"); // employee's name and the gross salary of the employee.
  

    for(i = 0; i < 100; i++) {
        printf("%s\t\t%.2f\n", emp[i].name, emp[i].gross_salary);
    }

    return 0;
}