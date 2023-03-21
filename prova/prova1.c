#include <stdio.h>
 
int main(){
 
    int antes, depois, contador=1, max = 1, seq, i=0, a=1, b=1,a2;
 
    scanf("%d", &seq);

    int vetor[seq];
 
    scanf("%d", &antes);
    vetor[0] = antes;
    for(i; i < seq-1; i++){
        scanf("%d", &depois);
        vetor[i+1] = depois;
            if(antes == depois){
                contador++;
                    if(contador > max){
                         max = contador;
                    }
                }else{
                    contador = 1;
                }
            antes=depois;
        }
        if(antes==depois){
            if(a < i){
                a = i-1;
            }else{
                b=i;
                if(vetor[seq] == vetor[seq-1]){
                    b = seq;
                }
            }
        }
    if(vetor[seq] == vetor[seq-1]){
        b=seq;
    }
    
    int j;
    if(max > 1){
        printf("%d (%d->%d)\n", max, a, b);  
    }else{
        printf("SEM SEGMENTO IGUAL\n");
    }
 
    return 0;
}