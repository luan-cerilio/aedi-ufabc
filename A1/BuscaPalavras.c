#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    typedef struct s_collection
    {
       char word[20];
    } s_collection;

    s_collection s[n];

    for (int i=0; i<n; i++)
        scanf("%s", s[i].word);

    int q;
    scanf("%d", &q);

    int result[q];

    typedef struct p_collection
    {
       char word[20];
    } p_collection;

    p_collection p[q];

    for (int i=0; i<q; i++) {
        scanf("%s", p[i].word);
        int count = 0;
        for(int j=0; j<n; j++) {
            if(strcmp(p[i].word, s[j].word) == 0)
                count++;
        }
        result[i] = count;
    }

    for(int i=0; i<q; i++)
        printf("%d\n", result[i]);

    return 0;
}