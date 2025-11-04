/* Declare a local variable inside a function and try to access it outside the 
function. Compare this with accessing the global variable from within the function*/

#include <stdio.h>
int globalarea=124;
void function(){
 int localradius=22;
 printf("inside function()\n");
 printf("global variable inside function() =%d\n",globalarea);
 printf("local variable inside function =%d",localradius);

}
int main() {
    printf("I am writing in main");
    printf("global variable inside main()=%d",globalarea);
//here it is showing that you have used local variable without declaring it
    function();
   
    return 0;
}