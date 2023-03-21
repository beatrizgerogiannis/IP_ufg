#include <stdio.h>

int separaDigitos(int n){
    int aux, u, d, c, num;
    c = n / 100;
    aux = n % 100;
    d = aux/10;
    u = aux%10;

    u *= 100;
    d *= 10;

    num = u+d+c;

    return num;
}

int main(){

    int n, num;
    scanf("%d", &n);

    num = separaDigitos(n);
    
    printf("%d\n", num);

    return 0;
}