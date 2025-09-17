/*WAP to take check if the triangle is valid or not. If the validity is established, do
check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the
triangle as input from a user.*/
#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        printf("This is a triangle.\n");

        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        
        else if (a == b || b == c || c == a) {
            printf("The triangle is Isosceles.\n");
        }
       
        else {
            printf("The triangle is Scalene.\n");
        }

        if ((a * a == b * b + c * c) ||
            (b * b == a * a + c * c) ||
            (c * c == a * a + b * b)) {
            printf("The triangle is also a right angled triangle.\n");
        }
    } else {
        printf("This is not a triangle.\n");
    }

    return 0;
}