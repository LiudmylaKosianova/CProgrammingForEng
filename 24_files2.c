#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *fin;
    char buf1[255];
    int buf2;

    fin = fopen("input_file.txt", "r");

    /*
    It is possible to check, whether file exists

    if ((fin = fopen("input_file.txt", "r")) == NULL){
        printf("File doesn't exist");
        exit(1);
    }
    */

    
    while(EOF != fscanf(fin, "%s %d", buf1, &buf2)){
        printf("%s %d\n", buf1, buf2);
    }

    fclose(fin);

    return 0;
}