#include <stdio.h>

long bubbleSort(int *v, int n);

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
    long trocas = bubbleSort(v,n);
    for(int k=0; k<n; k++) {
        if(k != n-1)
            printf("%d ", v[k]);
        else
            printf("%d\n", v[k]);
    }
    printf("Trocas: %ld\n", trocas);
    return 0;
}

long bubbleSort(int *v, int n) {
    int i, j, k, aux;
    long count=0;
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-1-i; j++) {
            if(v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                count++;
                for(k=0; k<n; k++) {
                    if(k != n-1)
                        printf("%d ", v[k]);
                    else
                        printf("%d\n", v[k]);
                }
            }
        }
    }
    return count;
}
