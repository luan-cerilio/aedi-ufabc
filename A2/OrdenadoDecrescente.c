#include <stdio.h>

int ord(int *v, int n);

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int v[n];
        for(int i=0; i<n; i++) {
            scanf("%d", &v[i]);
        }
        if(ord(v, n) == 1)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}

int ord(int *v, int n) {
    for(int i=1; i<n; i++) {
        if(v[i-1] < v[i])
            return 0;
    }
    return 1;
}
