
#include <stdio.h>

int main() {
    int rows = 5, i, j, coe;

    for(i = 0; i < rows; i++) {
        coe = 1;
        for(j = 0; j <= i; j++) {
            printf("%d ", coe);
            coe = coe*(i-j) / (j+1);  
        }
        printf("\n");
    }

    return 0;
}