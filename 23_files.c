#include <stdio.h>

#define Tmin 0.0
#define Tmax 6.28
#define Npts 10

int main(void){

    FILE *fout;
    fout = fopen("output_file.txt", "w");
    fprintf(fout, "Hello, file\n");
    fclose(fout);

    FILE *tout;
    tout = fopen("tout.txt", "w");
    double T[Npts];
    double Tstep = (Tmax - Tmin)/ (Npts -1);
    int i;

    T[0] = Tmin;
    for(i =1; i<Npts; i++){
        T[i] = Tstep + T[i - 1];
    }

    for(i=0; i<Npts; i++){
        fprintf(tout, "%.3lf\n", T[i]);
    }

    return 0;
}