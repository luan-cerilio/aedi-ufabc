#include <stdio.h>

int main() {
    int v[5], t, i, count=0;

    scanf("%d", &t);
    scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]);

    for(i=0; i<5; i++) {
        if(v[i] == t)
            count++;
    }

    printf("%d\n", count);

    return 0;
}