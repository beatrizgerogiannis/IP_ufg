#include <stdio.h>
#include <string.h>

void limpa_buffer(){
    scanf("%*[^\n]");
    scanf("%*c");
}

int calcula_distancia(int **m, char * p);

int main(){

    int aux=0 ,inicio, final,i, j, **m, tamanho_matriz, n_caminhos, custo;
    char str[21];
    
    scanf("%d", &tamanho_matriz);

    m = (int **)malloc(tamanho_matriz*sizeof(int*));
    for(i = 0; i < tamanho_matriz; i++){
        m[i] = (int *)malloc(tamanho_matriz*sizeof(int));
    }

    for(i=0; i<tamanho_matriz; i++){
        for(j=0; j<tamanho_matriz; j++){
            scanf("%d", &m[i][j]);
        }
    }

    scanf("%d", &n_caminhos);

    for(i=0; i<n_caminhos; i++){
        scanf("%s", str);
        custo = calcula_distancia(m, str);
        if(custo == 1){
            printf("Caminho invalido\n");
        }else{
            printf("Custo: %d\n", custo);
        }
    }

    return 0;
}

int calcula_distancia(int **m, char * str){
    int i, inicio, final, custo=0;

    inicio = str[0] - 65;

    for(i=0; i<strlen(str)-1; i++){
        final = str[i+1] - 65;
        custo += m[inicio][final];
        if(m[inicio][final] == -1){
            return 1;
        }
        inicio = str[i+1] - 65;
    }

    return custo;
}