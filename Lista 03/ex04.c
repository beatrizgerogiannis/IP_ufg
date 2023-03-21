#include <stdio.h>

int LED[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main(){

    int n; //quantidade de casos de teste
    int v; // valor lido a ser calculado a qtd de leds
    int d;
    int s;

    scanf("%d", &n);
    while(n--){
        s = 0;
        scanf("%d", &v); //123
        if(v==0){
            s = LED[0];
        }else{
            while(v>0){
                d = v%10;
                s = s + LED[d];
                v = v/10;
            }
        }
        printf("%d leds\n", s);    
    }

    return 0;
}