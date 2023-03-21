#include <stdio.h>

int LED[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
#define ND 101+1 //+1 pq é uma string;

int main(){

    int n; //quantidade de casos de teste
    char v[ND]; // str que representa o numero a ser calculado a qtd de leds
    int i, d;
    int s;

    scanf("%d", &n);
    while(n--){
        s = 0;
        i=0;
        scanf("%s", v);
        while(v[i] != '\0'){
            d = v[i] - '0';
            s += LED[d];
            i++;
        }

        printf("%d leds\n", s);    
    }

    return 0;
}