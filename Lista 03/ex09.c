#include <stdio.h>
#include <string.h>


int main(){

    int n, i, j, k;
    int v[10000];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    int cont=0, max=0, freq=0, notarep;
    int maior_nota=0, ind=0;

    for(j=0; j<n; j++){
        for(k=0; k<n; k++){
            if(v[j] == v[k]){
                cont++;
                if(cont > max){
                    notarep = v[j];
                    max = cont;
                }
            }
        }
        if(v[j] > maior_nota){
            maior_nota = v[j];
            ind = j;
        }
        cont = 0;
    }
    printf("Nota %d, %d vezes\n", notarep, max);
    printf("Nota %d, indice %d\n", maior_nota, ind);

    return 0;
}