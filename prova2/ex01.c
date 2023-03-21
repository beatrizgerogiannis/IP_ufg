#include <stdio.h>

int main(){

    int j=1 ,seq=0 ,num, antes, depois, max=0, seqi=0, seqf=0, a;
    scanf("%d", &num);
    
    scanf("%d", &antes);

    for(int i=1;i<num;i++){
        scanf("%d", &depois);
        if(antes == depois){
            seq++;
            if(seq >= max){
                max = seq;
                seqf = i;
            }
        }else{
            seq = 0;
        }
        antes = depois;
        j++;
    }

    if(max == 0){
        printf("SEM SEGMENTO IGUAL");
    }else{
        printf("%d (%d->%d)", max+1, (seqf+1)-max, seqf+1);
    }

    return 0;
}