#include <stdio.h>
#include <string.h>

int main(void){

    // char Mes[10] = "Hello";
    // int sizeMes = sizeof(Mes);

    // printf("The message: **%8s** takes %d bytes\n", Mes, sizeMes);
    // printf("The message: **%-8s** takes %d bytes\n", Mes, sizeMes);

    // char a[] = "World";// a points to the first element of the array
    // char *b = "World";// b (as a pointer) point to the first element of the array

    // printf("%s \n", a);
    // printf("%s \n", b);

    // // char c[10];
    // // printf("Enter a string: ");
    // // scanf(" %s", c);
    // // printf("You entered: %s\n", c);

    // char e[10];
    // printf("Enter a string: ");
    // fgets(e, sizeof(e), stdin);
    // printf("You entered: %s\n", e);

    char str1[] = "Hello World!";
    printf("%s \n", str1);
    printf("str1 length = %ld \n", strlen(str1));
    printf("str1 length = %ld \n", sizeof(str1)); 

    char str2[10];
    printf("Enter your name: ");
    fgets(str2, sizeof(str2), stdin);
    if (strcmp(str2, "CSCI\n") == 0){
        printf("Hello, CSCI\n");
    }else{
        printf("I don't know you ...");
    }



    return 0;
}