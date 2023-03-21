#include <stdio.h>

int main(){

    int n, f, k, cd, c=0;
    scanf("%d", &n);

    while(n<=1){
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
        scanf("%d", &n);
    }
    printf("%d =", n);

    while(n > 1){
        f=2;
        while(n%f != 0){
            while(1){
                f++;
                cd=0;
                for(k=1; k<= f; k++){
                    if(f%k == 0) cd++;
                }
                if(cd == 2) break;
            }
        }
        n = n/f;
        c++;
        if(c>1) printf(" x");
        printf(" %d", f);
    }

    return 0;
}