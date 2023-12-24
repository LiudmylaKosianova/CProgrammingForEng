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
    printf("M[0][1] = %.1lf \n", M[0][1]);
    printf("M[1][0] = %.1lf \n", M[1][0]);
    printf("M[1][1] = %.1lf \n", M[1][1]);
    printf("M[2][0] = %.1lf \n", M[2][0]);
    printf("M[2][1] = %.1lf \n", M[2][1]);

    return 0;
}