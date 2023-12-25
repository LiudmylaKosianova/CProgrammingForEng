#include <stdio.h>

int main(void){

    int n = 109;
    int *p = &n;

    printf("\n");
    printf("n = %d \n", n);
    printf("address of n is %p\n", p);
    printf("address of n is %p\n", &n);

    printf("\tusing n, n = %d", n);
    printf("\tusing *p, n = %d\n", *p);

    int A_int = 5;
    int B_int;

    int *A_po = &A_int;

    /*looked at the address, stored in pointer variable *A_po, 
      and then allocate the value, stored in that address, to the varible B_int*/
    B_int = *A_po; 

    printf("A_int is %d, and B_int is %d\n", A_int, B_int);
    printf("A_po has size of %ld bytes\n", sizeof(A_po));


    return 0;
}