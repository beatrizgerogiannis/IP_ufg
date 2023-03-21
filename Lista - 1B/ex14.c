#include <stdio.h>
 
int main(){
 
    int n, soma = 0, i;
    scanf("%d", &n);
 
    printf("%d = ", n);
 
    for(i = 1; i <= n/2; i++){
        if(n % i == 0){
            soma += i;
            
            if(i != n && i != 1){
                printf("+ ", i);
            }
            if(i!=n){
                printf("%d ", i);
            }
        }
    }
 
    if(n == soma){
        printf("= %d (NUMERO PERFEITO)", soma);
    }else{
        printf("= %d (NUMERO NAO E PERFEITO)", soma);
    }
 
    return 0;
}