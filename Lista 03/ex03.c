#include <stdio.h>

int main(){

    int j, i, vetor[5000], n;
    scanf("%d", &n);

    for(i = 0; i<n; i++){
        scanf("%d", &vetor[i]);
    }
    for(j = n-1; j>=0; j--){
        printf("%d ", vetor[j]);
    }

    return 0;
}