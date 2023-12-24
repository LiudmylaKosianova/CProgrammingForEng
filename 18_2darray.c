#include <stdio.h>

int main(void){

    double M[3][2];

    M[0][0] = 0.0;
    M[0][1] = 0.0;
    M[1][0] = 0.0;
    M[1][1] = 0.0;
    M[2][0] = 0.0;
    M[2][1] = 0.0;

    /*print array*/
    printf("M[0][0] = %.1lf \n", M[0][0]);

    return 0;
}