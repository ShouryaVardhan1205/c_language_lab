#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered!\n");
    } 
    else if (marks < 33) {
        printf("Result: FAIL\n");
    } 
    else {
        printf("Result: PASS\n");

        if (marks >= 60) {
            printf("Division: First Division\n");
        } 
        else if (marks >= 45) {
            printf("Division: Second Division\n");
        } 
        else {
            printf("Division: Third Division\n");
        }
    }

    return 0;
}