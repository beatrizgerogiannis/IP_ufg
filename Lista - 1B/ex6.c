#include <stdio.h>

int main(){

    int antes, depois, contador=1, max = 1, seq, i=0;

    scanf("%d", &seq);

    scanf("%d", &antes);
    for(i; i < seq - 1; i++){
        scanf("%d", &depois);
            if(antes < depois){
                contador++;
                if(contador > max){
                     max = contador;
                }
            }else{
                contador = 1;
            }
        antes=depois;
    }

    printf("O comprimento do segmento crescente maximo e: %d", max);

    return 0;
}