#include <stdio.h>

int main(){

    int l, c, i, j;
    int maior=0, menor=1000;
    float qtd_maior=0, qtd_menor=0, freq_maior, freq_menor, cont=0;
    int m[10][10];
    scanf("%d %d", &l, &c);
    
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            scanf("%d", &m[i][j]);
            if(m[i][j] > maior){
                maior = m[i][j];
            }
            if(m[i][j] < menor){
                menor = m[i][j];
            }
            cont++;
        }
    }
    
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            if(m[i][j] == maior){
                qtd_maior++;
            }
            if(m[i][j] == menor){
                qtd_menor++;
            }
        }
    }

    freq_maior = (qtd_maior/cont)*100;
    freq_menor = (qtd_menor/cont)*100;

    printf("%d %.2f%\n", menor, freq_menor);
    printf("%d %.2f%\n", maior, freq_maior);

    return 0;
}