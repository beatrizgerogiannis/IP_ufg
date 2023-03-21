
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcula_distancia( int m[][5], char * p );

int main(){
    int n, k=0, custo;
    int l, c;
    int m[5][5];
    char cam[50];

    scanf("%d", &n);

    for(l = 0; l < n; l++){
        for(c = 0; c < n; c++){
            scanf("%d", &m[l][c]);
        }
    }

    scanf("%d", &k);

    while(k--){
        scanf("%s", cam);
        custo = calcula_distancia(m, cam);
        if( custo == -1){
            printf("Caminho invalido\n");
        }else{
            printf("Custo: %d\n", custo);
        }
    }
    
    return 0;

}

int calcula_distancia( int m[][5], char * p ){
    int custo=0, i;
    int l, c;
    l = p[0] - 65;
    for(i = 0; i < strlen(p) - 1; i ++){
        c = p[i+1] - 65;
        custo += m[l][c];
        if(m[l][c] == -1) return -1;
        l = p[i+1]- 65;
    }

    return custo;
}