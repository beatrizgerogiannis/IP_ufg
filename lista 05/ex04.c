#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct vetor{
    double au, ax, ay, az;
    double soma, norma;
};
typedef struct vetor str_V;

int main(){

    int qtd_v;
    str_V * V, aux;
    int i, j, k, l;

    scanf("%d", &qtd_v);
    V = (str_V *) calloc(qtd_v, sizeof(str_V));

    for(i=0; i<qtd_v; i++){
        scanf("%lf %lf %lf %lf", &V[i].au, &V[i].ax, &V[i].ay, &V[i].az);
        V[i].soma = pow(V[i].au, 2) + pow(V[i].ax, 2) + pow(V[i].ay, 2) + pow(V[i].az, 2);
        V[i].norma = sqrt(V[i].soma);
    }

    for(j=0; j<qtd_v; j++){
        for(l=(j+1); l<qtd_v; l++){
            if(V[j].norma > V[l].norma){
                aux = V[j];
                V[j] = V[l];
                V[l] = aux;
            }
        }
    }

    for(k=0; k<qtd_v; k++){
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", V[k].au, V[k].ax, V[k].ay, V[k].az, V[k].norma);
    }

    free(V);

    return 0;
}