#include <stdio.h>

int main() {
    int a, b, n;

    scanf("%d", &n);
    scanf("%d %d", &a, &b);

    if(a+b > n)
        printf("Deixa para amanha!\n");
    else
        printf("Farei hoje!\n");

    return 0;
}