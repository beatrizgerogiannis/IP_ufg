#include <stdio.h>

unsigned long int fat (unsigned int n);

int main(){

    int n, fatorial;
    scanf("%d", &n);
    
    fatorial = fat(n);
    printf("%d! = %d\n", n, fatorial);

    return 0;
}

unsigned long int fat (unsigned int n){
    int f = 1, i;
    for(i=1; i <= n; i++){
        f *= i;
    }
    return (f);
}