#include <stdio.h>

int main() {
    float population = 100000;
    int year;

    printf("Population growth for the last 10 years:\n");

    for(year = 1; year <= 10; year++) {
        population = population + (population * 0.10);  // 10% increase
        printf("Year %d: Population = %.0f\n", year, population);
    }

    return 0;
}
