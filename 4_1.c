/*1. WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.*/
#include <stdio.h>

int main() {
    int num, choice;
    int positive = 0, negative = 0, zero = 0;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;
        else
            zero++;

        printf("Do you want to continue? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while(choice == 1);

    printf("\nCount of Positive Numbers = %d\n", positive);
    printf("Count of Negative Numbers = %d\n", negative);
    printf("Count of Zeroes = %d\n", zero);

    return 0;
}