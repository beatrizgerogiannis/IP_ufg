#include <stdio.h>

int main(){

    float salario, qtd, e, etnia, pcpt;

    scanf("%f %f %f %f", &salario, &qtd, &e, &etnia);
    pcpt = salario / qtd;

    if(e == 2){
        if(pcpt <= 937 * 1.5){
            if(etnia == 1 || etnia == 2 || etnia == 3){
                printf("ALUNO COTISTA (L2)");    
            }else{
                printf("ALUNO COTISTA (L1)");
            }
        }
        if(pcpt >= 937 * 1.5){
            if(etnia == 1 || etnia == 2 || etnia == 3){
                printf("ALUNO COTISTA (L4)");
            }else{
                printf("ALUNO COTISTA (L3)");
            }
        }
    }else{
        printf("ALUNO NAO COTISTA\n");
    }
    

    return 0;
}