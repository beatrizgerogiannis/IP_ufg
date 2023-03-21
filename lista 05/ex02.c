#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mercado{
    char produto[51];
    double preco;
};
typedef struct mercado M;

int main(){

    M * np = NULL;
    char pdt[51];
    int numero_idas, numero_produtos, qtd_compras, qtd_pdt;
    int i, j, k, l;
    double total=0;
    scanf("%d", &numero_idas);

    for(i=0; i<numero_idas; i++){
        scanf("%d", &numero_produtos);

        np = (M *) realloc(np, numero_produtos*sizeof(M));
        for(j=0; j<numero_produtos; j++){
            scanf("%s", np[j].produto);
            scanf("%lf", &np[j].preco);
        }

        scanf("%d", &qtd_compras);
        total = 0;
        for(k=0; k<qtd_compras; k++){
            scanf("%s", pdt);
            scanf("%d", &qtd_pdt);
            for(l=0; l<numero_produtos; l++){
                if(strcmp(pdt, np[l].produto) == 0){
                    total += (np[l].preco) * qtd_pdt;
                    break;
                }
            }
        }
        printf("R$ %.2lf\n", total);
    }

    free(np);


    return 0;
}