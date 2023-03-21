#include <stdio.h>

int main(){

    int n, m, i, j;
    scanf("%d %d", &n, &m);

    for(i = 2; i<=n; i++){
        for(j =1; j<=m; j++){
            if(i == j){
                break;
            }if(i!=j){
                if(i-j == 1 || j == m){
                    printf("(%d,%d)", i, j);
                }
                else{
                    printf("(%d,%d)-", i, j);
                }
            }
        }

        printf("\n");
    }        

    return 0;
}