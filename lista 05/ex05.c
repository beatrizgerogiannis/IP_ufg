#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Faculdade{
    int cod_curso;
    float valor_credito;
    char nome_curso[101];
};
typedef struct Faculdade str_F;

struct Aluno{
    char nome_aluno[501];
    int cod_mat;
    int num_cdt;
};
typedef struct Aluno str_A;

void limpa_buffer();

int main(){

    char curso[100];
    double mensalidade;
    int aux;
    int n_faculdade, n_alunos, i, j, k;
    str_F * F;
    str_A * A;
    scanf("%d", &n_faculdade);

    F = (str_F *) calloc(n_faculdade, sizeof(str_F));

    for(i=0; i<n_faculdade; i++){
        scanf("%d", &F[i].cod_curso);
        limpa_buffer();
        scanf("%f", &F[i].valor_credito);
        limpa_buffer();
        scanf("%[^\n]s", F[i].nome_curso);
        limpa_buffer();
    }

    scanf("%d", &n_alunos);
    limpa_buffer();

    A = (str_A *) calloc(n_alunos, sizeof(str_A));

    for(i=0; i<n_alunos; i++){
        scanf("%[^\n]s", A[i].nome_aluno);
        limpa_buffer();
        scanf("%d", &A[i].cod_mat);
        limpa_buffer();
        scanf("%d", &A[i].num_cdt);
        limpa_buffer();

        for(j=0; j<n_faculdade; j++){
            if(F[j].cod_curso == A[i].cod_mat){
                aux = j;
                break;
            }
        }

        mensalidade = (double)F[j].valor_credito * (double)A[i].num_cdt;
        
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2f\n", A[i].nome_aluno, F[aux].nome_curso, A[i].num_cdt, F[j].valor_credito, mensalidade);
    }

    free(F);
    free(A);

    return 0;
}

void limpa_buffer(){
    scanf("%*[^\n]");
    scanf("%*c");
}

//printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Creditos %.2f Mensalidade: %.2lf", A[i].nome_aluno, )