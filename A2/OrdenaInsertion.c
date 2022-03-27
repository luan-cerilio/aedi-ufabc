#include <stdio.h>
#define ALEATORIO 0
#define MELHOR 1
#define PIOR 2

long insertion(int *v, int n);
int ord(int *v, int n);

int main() {
    int n;
    scanf("%d", &n);
    int v[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    for(int k=0; k<n; k++) {
        if(k != n-1)
            printf("%d ", v[k]);
        else
            printf("%d\n", v[k]);
    }
    int caso = ord(v,n);
    long trocas = insertion(v,n);
    for(int k=0; k<n; k++) {
        if(k != n-1)
            printf("%d ", v[k]);
        else
            printf("%d\n", v[k]);
    }
    printf("Trocas:%ld\n", trocas);
    if(caso == ALEATORIO)
        printf("CASO ALEATORIO\n");
    else if(caso == MELHOR)
        printf("MELHOR CASO\n");
    else if(caso == PIOR)
        printf("PIOR CASO\n");
    return 0;
}

long insertion(int *v, int n) {
    int chave, i, j, k;
    long count=0;
    for(i=1; i<n; i++) {
        chave = v[i];
        j = i-1;
        while(j >= 0 && v[j] >= chave) {
            v[j+1] = v[j];
            v[j] = chave;
            j = j-1;
            count++;
            for(k=0; k<n; k++) {
            if(k != n-1)
                printf("%d ", v[k]);
            else
                printf("%d\n", v[k]);
            }
        }
    }

    return count;
}


int ord(int *v, int n) {
    for(int j=1; j<n; j++) {
        if(v[j-1] != v[j]) {
            if(v[j-1] < v[j]) {
                for(int i=j; i<n; i++) {
                    if(v[i-1] > v[i])
                    return ALEATORIO;
                }
                return MELHOR;
            } else {
                for(int i=j; i<n; i++) {
                    if(v[i-1] < v[i])
                        return ALEATORIO;
                }
                return PIOR;
            }
        }
    }
    return ALEATORIO;
}
