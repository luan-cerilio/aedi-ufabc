#include <stdio.h>

int main() {
    long ano;

    scanf("%ld", &ano);

    if(((ano % 400)==0)||(((ano % 100)!=0) && ((ano % 4)==0)))
        printf("ANO BISSEXTO\n");
    else
        printf("ANO NAO BISSEXTO\n");

    return 0;
}