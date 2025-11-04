/*   Declare a global variable outside all functions and use it
 inside various functions to understand its accessibility.*/

#include <stdio.h>
int add();
float pi=3.141;
//here pi is declared as global variable
int main() {
   int radius=20,circumference;
   float area=pi*radius*radius;
   printf("area of circle=%.2f\n",area);
   add();
    
    return 0;
}
int add(){
   int radius=10;
   float circumference=2*pi*radius;
   printf("circumference of a circle is %.2f",circumference);

}