#include <stdio.h>
#include <stdlib.h>

struct Aluno{
        int matricula;
        int dia, mes, ano;
        char nome[200];
    };
    typedef struct Aluno str_A;

int main(){

    int n, i,j,l;
    str_A * A, aux;
    scanf("%d", &n);

    A = (str_A *)calloc(n, sizeof(str_A));

    for(i=0; i<n; i++){
        scanf("%d", &A[i].matricula);
        scanf("%d %d %d", &A[i].dia, &A[i].mes, &A[i].ano);
        scanf("%[^\n]s", A[i].nome);
    }

    for(j=0; j<n; j++){
        for(l=(j+1); l<n; l++){
            if(A[j].ano < A[l].ano){
                aux = A[j];
                A[j] = A[l];
                A[l] = aux;
            }
        }
    }
    
    for(j=0; j<n; j++){
        for(l=(j+1); l<n; l++){
            if(A[j].ano == A[l].ano){
                if(A[j].mes < A[l].mes){
                    aux = A[j];
                    A[j] = A[l];
                    A[l] = aux;
                }
            }
        }
    }

    for(j=0; j<n; j++){
        for(l=(j+1); l<n; l++){
            if(A[j].ano == A[l].ano){
                if(A[j].mes == A[l].mes){
                    if(A[j].dia < A[l].dia){
                        aux = A[j];
                        A[j] = A[l];
                        A[l] = aux;
                    }
                }
            }
        }
    }

    for(i=0; i<n; i++){
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", A[i].matricula, A[i].nome, A[i].dia, A[i].mes, A[i].ano);
    }

    free(A);

    return 0;
}