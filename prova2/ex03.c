#include <stdio.h>

int main(){

    float x, y, qtdg=0, gfe=0, gb=0,q1=0, q2=0, q3=0, q4=0;

    while(1){
        scanf("%f %f", &x, &y);
        if(x == 0 && y == 0){
            break;
        }else{
            qtdg++;
            if(x>1 || x<0 || y>1 || y<0){
                gfe++;
            }
                else if( x==0 || y==0 || x==0.5 || y==0.5 || x==1 || y == 1){
                    gb++;
                }
                else if(x > 0 && x < 0.5 && y > 0 && y < 0.5){
                    q1++;
                }
                else if(x > 0.5 && x < 1 && y > 0 && y < 0.5){
                    q2++;
                }
                else if(x > 0 && x < 0.5 && y > 0.5 && y < 1){
                    q3++;
                }
                else if(x > 0.5 && x < 1 && y > 0.5 && y < 1){
                    q4++;
                }
        }
    }

    printf("Quantidade de gotas: %.0f\n", qtdg);
    printf("Gotas fora do experimento: %.0f\n", gfe);
    printf("Gotas na borda: %.0f\n", gb);
    printf("q1(%.0f), q2(%.0f), q3(%.0f), q4(%.0f)\n", q1, q2, q3, q4);

    return 0;
}