#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct consumo{
    int qtd_pessoas;
    int qtd_agua;
    double media_consumo;
};
typedef struct consumo str_C;

int main(){

    int n, i, j, cont=1;
    str_C * C = NULL, aux;
    double media, pessoas=0, agua=0;
    scanf("%d", &n);
    
    while(n != 0){

        if(cont != 1){
            printf("\n");
        }

        C = (str_C *)realloc(C, n * sizeof(str_C));

        for(i=0; i<n; i++){
            scanf("%d %d", &C[i].qtd_pessoas, &C[i].qtd_agua);
            pessoas += C[i].qtd_pessoas;
            agua += C[i].qtd_agua;
        }

        for(i=0; i<n; i++){
            C[i].media_consumo = (double)C[i].qtd_agua / (double)C[i].qtd_pessoas;
        }

        for ( i = 0; i < n; i++){
            for ( j = (i+1); j < n; j++){
                if (C[i].media_consumo > C[j].media_consumo){
                    aux = C[i];
                    C[i] = C[j];
                    C[j] = aux;
                }
            }
        }

        media = agua/pessoas;

        printf("Cidade# %d:\n", cont);
        for(i=0; i<n; i++){
            printf("%d-%.0lf ", C[i].qtd_pessoas, floor(C[i].media_consumo));
        }
        printf("\n");
        printf("Consumo medio: %.2lf m3.\n", media);
        cont++;
        pessoas = 0;
        agua = 0;

        scanf("%d", &n);
    }

    free(C);
    return 0;
}