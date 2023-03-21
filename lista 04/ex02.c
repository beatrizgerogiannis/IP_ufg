#include <stdio.h>

int main(){

    int m[100][100];
    int i,j,n;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &m[i][j]);
        }    
    }

    int k=0, l=n-1;;

    for(i=0;i<n;i++){
        printf("%d\n", m[k][l]);
        k++;
        l--;
    }   

    return 0;
}