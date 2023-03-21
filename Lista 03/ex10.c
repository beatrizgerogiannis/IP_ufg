#include <stdio.h>

void inverte(int v[], int n){
    int i, aux, fim;
    fim = n-1;
    for(i=0; i<n/2; i++){
        aux = v[i];
        v[i] = v[fim];
        v[fim] = aux;
        fim--;
    }
}


int main(){

    int n, v[1000], i, maior=0, menor;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
        if(v[i] > maior){
            maior = v[i];
        }
    }

    menor = v[0];

    for(i=0; i<n; i++){
        printf("%d ", v[i]);
        if(i == n-1){
            printf("\n");
        }
        if(v[i] < menor){
            menor = v[i];
        }
    }

    inverte(v, n);
    for(i=0; i<n; i++){
        printf("%d ", v[i]);
        if(i == n-1){
            printf("\n");
        }
    }

    printf("%d\n%d\n", maior, menor);


    return 0;
}