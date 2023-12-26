#include <stdio.h>

int main(void){

    char Mes[10] = "Hello";
    int sizeMes = sizeof(Mes);

    printf("The message: **%8s** takes %d bytes\n", Mes, sizeMes);
    printf("The message: **%-8s** takes %d bytes\n", Mes, sizeMes);

    char a[] = "World";// a points to the first element of the array
    char *b = "World";// b (as a pointer) point to the first element of the array

    printf("%s \n", a);
    printf("%s \n", b);

    // char c[10];
    // printf("Enter a string: ");
    // scanf(" %s", c);
    // printf("You entered: %s\n", c);

    char e[10];
    printf("Enter a string: ");
    fgets(e, sizeof(e), stdin);
    printf("You entered: %s\n", e);

    return 0;
}