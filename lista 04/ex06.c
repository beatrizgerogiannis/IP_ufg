#include <stdio.h>
     
int main(){
    int m[6][6];
    int i, j, max = -100, soma;
    int l = 6, c = 6;
 
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d", &m[i][j]);   
        } 
    }
     
    for(i=1;i<(l-1);i++){
        for (j=1;j<(c-1);j++){
            soma = (m[i-1][j-1] + m[i-1][j] + m[i-1][j+1] + m[i][j] + m[i+1][j-1] + m[i+1][j] + m[i+1][j+1]);
            if(max <= soma){
                max = soma;
            }
        }
    }
    printf("%d\n", max);        
     
    return 0;
}