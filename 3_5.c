/*WAP using ternary operator, the user should input the length and breadth of a
rectangle, one has to find out which rectangle has the highest perimeter. The
minimum number of rectangles should be three.
*/
#include <stdio.h>

int main() {
    int n = 3;
    float length[10], breadth[10], perimeter[10];
    int i;

    for(i = 0; i < n; i++) {
        printf("Enter length and breadth of rectangle %d: ", i+1);
        scanf("%f %f", &length[i], &breadth[i]);
        perimeter[i] = 2*(length[i]+breadth[i]);
    }

    int maxIndex = 0;
    maxIndex = (perimeter[1]>perimeter[maxIndex])?1: maxIndex;
    maxIndex = (perimeter[2]>perimeter[maxIndex])?2: maxIndex;

    printf("Rectangle %d has the highest perimeter of %.2f\n", maxIndex+1, perimeter[maxIndex]);

    return 0;
}
