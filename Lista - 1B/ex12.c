#include <stdio.h>
#include <math.h>

int main(){

    int n, h, i, j;
    float aux;
    scanf("%d", &n);

    for(h=1;h<=n;h++){
        for( i = 1; i <= n; i++){
            for( j = 1; j<= n; j++){
                aux = sqrt((pow(i,2)+pow(j,2)));
                if(h <= n){
                    if(aux == h){
                        if(i <= j){
                            printf("hipotenusa = %d, catetos %d e %d\n", h, i, j);
                        }
                    }
                }
            }
        }
    }

    return 0;
}