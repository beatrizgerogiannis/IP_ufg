#include <stdio.h>

int converteEmNotasMoedas(int valor);

int main(){

    int valor;
    scanf("%d", &valor);
    converteEmNotasMoedas(valor);

    return 0;
}

int converteEmNotasMoedas(int valor){
    int notas100, notas50, notas10, moeda1, aux, aux2;
    notas100 = valor / 100;
    aux = valor % 100;
    notas50 = aux / 50;
    aux = aux % 50;
    notas10 = aux / 10;
    aux = aux % 10;
    moeda1 = aux;

    printf("NOTAS DE 100 = %d\n", notas100);
    printf("NOTAS DE 50 = %d\n", notas50);
    printf("NOTAS DE 10 = %d\n", notas10);
    printf("MOEDAS DE 1 = %d\n", moeda1);
}