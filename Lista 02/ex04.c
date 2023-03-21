#include <stdio.h>

int numeroPerfeito(int n);

int main(){
    
    int n;
    scanf("%d", &n);
    numeroPerfeito(n);
 
    return 0;
}   

int numeroPerfeito(int n){
    int soma = 0, i;
 
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
}