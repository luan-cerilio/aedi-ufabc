#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=1, teste=0;

    while(!n==0) {
        scanf("%d", &n);

        if(!n==0) {
            teste++;
            int *v, win;
            v = malloc (n * sizeof (int));
            for (int i=0; i<n; i++) {
                scanf ("%d", &v[i]);
                if(v[i] == i+1)
                    win = v[i];
            }
            printf("Teste %d\n", teste);
            printf("%d\n", win);
            printf("\n");
            free (v);
        }
    }

    return 0;
}
