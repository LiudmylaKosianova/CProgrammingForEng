#include <stdio.h>

int main(){

    /*
    ask a user for a number
    check the number
    print statements
    */

   int a;
   printf("Enter your number: ");
   scanf("%d", &a);
   if(a < 0){
    printf("You entered a negative number\n");
   } else if(a > 0){
    printf("You entered a positive number\n");
   } else{
    printf("You entered number zero\n");
   }

    return 0;
}
