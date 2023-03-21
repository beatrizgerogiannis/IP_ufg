#include <stdio.h>

void ordena(double v[], int n);

int main(){

    int n, i;
    double v[100000], media;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%lf", &v[i]);
    }
    ordena(v, n);

    if(n % 2 == 0){
        media = (v[n/2] + v[(n/2) - 1]) / 2;
        printf("%.2lf", media);
    }else{
        media = v[n/2];
        printf("%.2lf", media);
    }

    return 0;
}

void ordena(double v[], int n){
    int aux, i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}