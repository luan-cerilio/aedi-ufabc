#include <stdio.h>

int main() {
    int n, comp;
    scanf("%d", &n);
    int v[n], w[n+1];

    for(int i=0; i<n; i++)
        scanf("%d", &v[i]);

    for(int i=0; i<n+1; i++)
        scanf("%d", &w[i]);

    for(int i=0; i<n+1; i++) {
        for(int j=0; j<n; j++) {
            if(w[i] == v[j])
                break;
            else if(j == n-1)
                printf("%d\n", w[i]);
        }
    }

    return 0;
}