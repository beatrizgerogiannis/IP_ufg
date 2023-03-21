#include <stdio.h>

int ePermitacao(int matriz[][500], int n, int* soma);

int main(){

    int matriz[500][500], n, soma=0, r;

    scanf("%d", &n);
    r = ePermitacao(matriz, n, &soma);

    if(r == 1){
        printf("%d\n", n);
        printf("PERMUTACAO\n");
        printf("%d\n", soma);
    }else{
        printf("%d\n", n);
        printf("NAO EH PERMUTACAO\n");
        printf("%d\n", soma);
    }

    return 0;
}

int ePermitacao(int matriz[][500], int n, int* soma){
    int cont=0, i, j, aux;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
            *soma += matriz[i][j];
        }   
    }

    if(*soma != n){
        return 0;
    }else{
        for(i=0; i<n; i++){
            aux=0;
            for(j=0; j<n; j++){
                if(matriz[i][j] == 1){
                    cont++;
                    aux++;
                if(aux > 1){
                    return 0;
                }
                }else if(matriz[i][j] != 0 ){
                    return 0;
                }
            }   
        }   
    }
    
    if(cont == n){
        for(j=0; j<n; j++){
            aux=0;
            for(i=0; i<n; i++){
                if(matriz[i][j] == 1){
                    aux++;
                    if(aux > 1){
                        return 0;
                    }
                }
            }
        }
    }else{
        return 0;
    }

    return 1;
}