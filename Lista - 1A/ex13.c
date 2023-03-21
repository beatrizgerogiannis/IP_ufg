#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int f1, f2;

    if((a+b+c)%3 == 0){
        f1 = 1;
    }else{
        f1 = 0;
    }
    if(c % 2 == 0 && c < (a+b)){
        f2 = 1;
    }else{
        f2 = 0;
    }
    
    double delta, x1, x2;

    delta = (b*b) - 4 * a * c;
    x1 = (double)(-b + sqrt(delta))/(2*a);
    x2 = (double)(-b - sqrt(delta))/(2*a);
    
    if(delta > 0){
         if((x1 > 5 || x1 < -5) || (x2 > 5 || x2 < -5)){
            printf("POSICOES: X1=%.2lf e X2=%.2lf (FORA DO EXPERIMENTO)\n", x1, x2);
        }else{
            printf("POSICOES: X1=%.2lf e X2=%.2lf\n", x1, x2);
        }
    }
    if(delta < 0){
        printf("POSICOES IMAGINARIAS\n");
    }    

    if(f1 == 1){
        printf("FATO1: DESAPARECIDA\n");
    }
    if(f2 == 1){
        printf("FATO2: ORIGEM\n");
    }
    

    return 0;
}