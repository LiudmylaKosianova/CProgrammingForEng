#include <stdio.h>

int main (void){

    double a,b,c,d;
    a = 1.602e-19; //charge of an electron
    b = 1.1; //holds current
    c = 6.2422e+18; //electrons per 1 coulomb
    d = 1.3; //electrons per given current

    printf("Welcome to the Electron Calculator!\n");
    printf("\n\tEnter your electrical current in Amp:\n");
    printf("\n\tYou entered something\n");
    printf("\tThere are %.4E electrons in one Coulomb\n", c);




    return 0;
}