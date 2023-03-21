#include <stdio.h>

int main(){

    int qtdgf=0, qtdg=0,q1=0,q2=0,q3=0,q4=0;
    float x, y, qtdgb=0;

    while(1){
        scanf("%f %f", &x, &y);
        if(x == 0.0 && y == 0.0){
            break;
        }else{
            qtdg++;
        if(x == (float)0 || x == (float)0.5 || x == (float)1 || y == (float)0 || y == (float)0.5 || y == (float)1){
            qtdgb++;
            printf("%.0f\n", qtdgb);
        }
        if(x > 1 || x < 0 || y > 1 || y < 0){
            qtdgf++;
        }
        if(x > 0 && x < 0.5 && y > 0 && y < 0.5){
            q1++;
        }
        if(x > 0.5 && x < 1 && y > 0 && y < 0.5){
            q2++;
        }
        if(x > 0 && x < 0.5 && y > 0.5 && y < 1){
            q3++;
        }
        if(x > 0.5 && x < 1 && y > 0.5 && y < 1){
            q4++;
        }
    }
    }

    /*printf("Quantidade de gotas: %d\n", qtdg);
    printf("Gotas fora do experimento: %d\n", qtdgf);
    printf("Gotas na borda: %.0f\n", qtdgb);
    printf("q1(%d), q2(%d), q3(%d), q4(%d)", q1, q2, q3, q4);*/

    return 0;
}