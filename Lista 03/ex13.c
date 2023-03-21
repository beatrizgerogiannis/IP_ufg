#include <stdio.h>

int main(){

    int cont=0, n, i, a, b;
    char v[12000];
    scanf("%d", &n);

    for(i = 0; i<n; i++){
        scanf("%d %d", &a, &b); // le num1 e num2
        for(a; a<=b; a++){ 
            v[cont] = a;
            printf("%d", v[cont]);
        }
    }

    return 0;
}