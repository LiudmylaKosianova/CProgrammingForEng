#include <stdio.h>

int main (void){

    double a,b,c,d;
    a = 1.602e-19; //charge of an electron
    b = 1.1; //holds current
    c = 1 / a; //electrons per 1 coulomb
    d = c * b; //electrons per given current

    printf("Welcome to the Electron Calculator!\n");
    printf("\n\tEnter your electrical current in Amp: ");
    scanf("%lf", &b);
    printf("\n\n");
    printf("\tYou entered %.4E Amps\n", b);
    printf("\tCharge of an electron = %.4E\n",a);
    printf("\tThere are %.4E electrons in one Coulomb\n", c);
    printf("\t%.4E",d);




    return 0;
}