#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int map[n+1][n+1];
    for(int i=0; i<n+1; i++) {
        for(int j=0; j<n+1; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            int count = 0;
            if(map[0+i][0+j] == 1)
                count++;
            if(map[0+i][1+j] == 1)
                count++;
            if(map[1+i][0+j] == 1)
                count++;
            if(map[1+i][1+j] == 1)
                count++;
            if(count>1)
                printf("S");
            else
                printf("U");
        }
        printf("\n");
    }

    return 0;
}