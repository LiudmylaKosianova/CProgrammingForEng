#include <stdio.h>

int f(int x);

int main(){

    int y;
    y = f(2);
    return 0;
}

int f(int x){
    int y;
    y = x*x;
    return y;
}