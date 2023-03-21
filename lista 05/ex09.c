#include <stdio.h>
#include <stdlib.h>

struct frac{
    int num, den;
};
typedef struct frac Frac;

int main(){

    Frac * vf = NULL;
    int num, den;
    int nct, ict;
    int tvf;
    int i,j, cont, aux=0;
    int f;
    scanf("%d", &nct);

    for(ict=0; ict<nct; ict++){
        printf("Caso de teste %d\n", ict+1);

        cont = 1;
        while(1){

            vf = (Frac *) realloc(vf, cont * sizeof(Frac));
            scanf("%d/%d", &num, &den);
            if(vf[aux].den > vf[aux-1].den){
                
            }

            aux++;
            cont++;
        }

        f=0;
        for(i=0; i<tvf; i++){
            for(j=i+1; j<tvf; j++){
                if(vf[i].num/(double)vf[i].den == vf[j].num/(double)vf[j].den){
                    printf("%d/%d equivalente a %d/%d\n", vf[i].num, vf[i].den, vf[j].num, vf[j].den);
                    f=1;
                }
            }
        }
        if(f==0){
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
        free(vf);
    }


    return 0;
}