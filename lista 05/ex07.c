#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct distancia{
    double u, x, y, z;
};
typedef struct distancia str_D;

int main(){

    int n, i;
    double U, X, Y, Z, soma;
    str_D * D;
    scanf("%d", &n);

    D = (str_D *)calloc(n, sizeof(str_D));

    for(i=0; i<n; i++){
        scanf("%lf %lf %lf %lf", &D[i].u, &D[i].x, &D[i].y, &D[i].z);
    }

    for(i=0; i<(n-1); i++){
        U = D[i].u - D[i+1].u;
        X = D[i].x - D[i+1].x;
        Y = D[i].y - D[i+1].y;
        Z = D[i].z - D[i+1].z;

        soma = (U*U) + (X*X) + (Y*Y) + (Z*Z);
        soma = sqrt(soma);

        printf("%.2lf\n", soma);
    }

    free(D);

    return 0;
}