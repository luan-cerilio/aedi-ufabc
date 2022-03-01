#include <stdio.h>
#include <stdbool.h>
#define SHELDON true

int main() {
    int n, sum_shel=0, sum_leo=0, dice;
    bool winner = false, turn = SHELDON;
    scanf("%d", &n);

    while(!winner) {
        scanf("%d", &dice);
        if(turn == SHELDON) {
            if(sum_shel%2==0 && dice%2==0 || sum_shel%2!=0 && dice%2!=0)
                sum_shel++;
            else if(sum_shel > 0)
                sum_shel--;
            if(sum_shel >= n) {
                printf("Sheldon\n");
                winner = true;
            }
        } else {
            if(sum_leo%2==0 && dice%2==0 || sum_leo%2!= 0 && dice%2!=0)
                sum_leo++;
            else if(sum_leo > 0)
                sum_leo--;
            if(sum_leo >= n) {
                printf("Leonard\n");
                winner = true;
            }
        }
        turn = !turn;
    }

    return 0;
}