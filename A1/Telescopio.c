#include <stdio.h>

int main() {
    int area, n_star, fotons, count=0;
    long sum = 0;

    scanf("%d", &area);
    scanf("%d", &n_star);

    for (int i=0; i<n_star; i++) {
        scanf ("%d", &fotons);
        if(fotons*area/40000000 >= 1)
            count++;
    }

    printf("%d\n", count);

    return 0;
}