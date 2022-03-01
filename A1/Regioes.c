#include <stdio.h>

int main() {
    long n, Ln;

    scanf("%ld", &n);

    Ln = (n*(n+1)/2)+1;

    printf("%ld\n", Ln);

    return 0;
}