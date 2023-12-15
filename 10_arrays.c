#include <stdio.h>

int main(){

    int A[4];

    A[0] = 22;
    A[1] = 109;
    A[2] = 101;
    A[3] = -8;

    printf("A[0] = %d \n", A[0]);
    printf("A[1] = %d \n", A[1]);
    printf("A[2] = %d \n", A[2]);
    printf("A[3] = %d \n", A[3]);

    printf("Printing with loop\n");

    for(int i = 0; i<4; i++){
        printf("A[%d] = %d \n", i, A[i]);
    }

    return 0;
}