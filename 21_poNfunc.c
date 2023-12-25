#include <stdio.h>
#include <math.h>

#define Tmin 0.0
#define Tmax 6.28
#define Npts 10

//function to double everything

void double_up(double *Aptr, int N);

int main(void){

    double T[Npts];
    double Vsin[Npts];
    double *Vsin_p = Vsin;
    double Tstep = (Tmax -Tmin) / (Npts - 1);

    return 0;
}

void double_up(double *Aptr, int N){
    int i;
    for(i=0; i<N; i++){
        *(Aptr + i) = *(Aptr +i) * 2;
    }
}