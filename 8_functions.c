#include <stdio.h>

int f(int x);
int get_five(void);

int main(){

    int y,yy;
    y = f(2);
    printf("2 squared is %d\n", y);
    yy = get_five();
    printf("I've got %d\n", yy);
    return 0;
}

int f(int x){
    int y;
    y = x*x;
    return y;
}

int get_five(void){
    int get_five = 5;
    return get_five;
}