#include <stdio.h>

void le_conjunto(int * v ,int n);

int main(){

    int n, i, aux, aux2=0, j, aux3=0, cont=0;
    int v[100];
    scanf("%d", &n);
    cont = n;

    if(n < 1 || n > 100){
        return 0;
    }else{
        while(cont != 0){
            scanf("%d", &aux);
            for(j=0; j<n; j++){
                if(v[j] == aux){
                    break;
                }else{
                    cont--;
                    aux3++;
                    v[aux2] = aux;
                    aux2++;
                    break;
                }
            }
        }
    }

    for(i=0; i<aux3; i++){
        printf("%d ", v[i]);
    }
        
    return 0;
}

/*void le_conjunto(int * v, int n){
    int i, j, aux=0, aux2;

   

    return;
}*/