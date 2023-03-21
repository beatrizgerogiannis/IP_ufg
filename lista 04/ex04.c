#include <stdio.h>

int main(){

    int l, c, i, j, m[10][10], k;

    do{
        scanf("%d", &l);
    }
    while(l > 10 || l < 1);

    do{
        scanf("%d", &c);
    }
    while(c > 10 || c < 1);

    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(i=0;i<l;i++){
        printf("\n");
        printf("linha %d: ", i+1);
        for(j=0;j<c;j++){
            printf("%d", m[i][j]);
            if(j != c-1){
                printf(",");
            }
        }
    }

    return 0;
}