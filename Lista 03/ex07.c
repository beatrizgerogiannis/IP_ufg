#include <stdio.h>

int main(){

    int n, v[1000], max=0, cont=0;
    int i, j, k;

    do{
        scanf("%d", &n);
        if(n != 0){
        for(i = 0; i<n; i++){
            scanf("%d", &v[i]);//ler vetor
            if(v[i] > max){
                max = v[i];
            }
        }

        for(j = 0; j <= max; j++){
            for(k = 0; k < n; k++){
                if(j >= v[k]){
                    cont++;
                }         
            }
            printf("(%d) %d\n", j, cont);
            cont = 0;
        }
        max = 0;
        }

    }while(n!=0);

    return 0;
}