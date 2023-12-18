#include <stdio.h>


#define Tmin 0.0 //decimal places indicate double/float
#define Tmax 1.0
#define Npts 10 //no decimal places indicate int

int main(void){

    int i;

    /*calculate the "step" size*/
    
    //double Tstep = (Tmax - Tmin) / (Npts); // "step size" is smaller and deosn't include Tmax
    double Tstep = (Tmax - Tmin) / (Npts -1); //"step size" is larger and includes Tmax
    double T[Npts];

    T[0] = Tmin; // it will initialize first element to be the Tmin
    for(i=1; i<Npts; i++){
        T[i] = T[i-1] + Tstep; //continuously add step size to the prior value
    }

    for(i=0; i<Npts; i++){
        printf("T[%d] = %.2lf\n", i, T[i]);
    }


    return 0;
}