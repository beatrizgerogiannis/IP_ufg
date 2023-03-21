#include <stdio.h>

int main(){

    int i, vetor[1000], n;

    do{
        scanf("%d", &n);
    }
    while(n < 1 || n > 1000);

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    int num, j, cont=0;
    scanf("%d", &num);

    for(j = 0; j < n; j++){
        if(num <= vetor[j]){
            cont++;
        }
    }
    printf("%d", cont);

    return 0;
}