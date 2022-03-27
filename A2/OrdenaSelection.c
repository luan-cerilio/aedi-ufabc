#include <stdio.h>

long selectionSort(int *v, int n);

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
    long trocas = selectionSort(v,n);
    for(int k=0; k<n; k++) {
        if(k != n-1)
            printf("%d ", v[k]);
        else
            printf("%d\n", v[k]);
    }
    printf("%ld\n", trocas);
    return 0;
}

long selectionSort(int *v, int n) {
    int i, j, k, aux, iMin;
    long count=0;
    for(i=0; i<n-1; i++) {
        for(j=i+1, iMin=i; j<n; j++) {
            if(v[j] < v[iMin]) {
                iMin = j;
                count++;
            }
        }
        aux = v[i];
        v[i] = v[iMin];
        v[iMin] = aux;
        for(k=0; k<n; k++) {
            if(k != n-1)
                printf("%d ", v[k]);
            else
                printf("%d\n", v[k]);
        }
    }
    return count;
}