#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int vetor[n], i;

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    int rep;
    scanf("%d", &rep);

    int num, cont=0, j, k;

    for(j = 0; j < rep; j++){
        scanf("%d", &num);
        for(k = 0; k < n; k++){
            if(num == vetor[k]){
                cont++;
            }
        }
        if(cont > 0){
            printf("ACHEI\n");
        }else{
            printf("NAO ACHEI\n");
        }
        cont = 0;
    }
    return 0;
}