#include <stdio.h>

int main(){

    double vi, taxa, anos, aux;
    int i, j;
    scanf("%lf %lf %lf", &vi, &taxa, &anos);

    taxa /= 100;
    taxa /= 12;

    for(i=1; i<=anos; i++){
        aux = vi * taxa;
        for (j=1; j<=12; j++){
            vi += aux;
            printf("Mes: %d/%d, Valor: %.1lf\n", j, i, vi);
        }
    }

    return 0;
}