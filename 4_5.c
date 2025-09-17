/*Ramanujan Number is the smallest number that can be expressed as the sum of two
cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
 Example of Ramanujan number: 1729
 12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)*/
 #include <stdio.h>

int main() {
    int L, a, b, c, d, n;

    printf("Enter the limit (L): ");
    scanf("%d", &L);

    printf("Ramanujan Numbers up to %d^3:\n", L);

    for (a = 1; a <= L; a++) {
        for (b = a; b <= L; b++) {
            for (c = a; c <= L; c++) {
                for (d = c; d <= L; d++) {
                    int sum1 = a*a*a + b*b*b;
                    int sum2 = c*c*c + d*d*d;

                    if (sum1 == sum2 && !(a == c && b == d)) {
                        n = sum1;
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               n, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}