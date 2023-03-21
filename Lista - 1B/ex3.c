#include <stdio.h>

int main(){

    int x, y;
    scanf("%d %d", &x, &y);

    if(x%2==0){
        int i = 0;
        while(i < y){
            printf("%d ", x);
            i++;
            x += 2;
        }
    }else{
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }

    return 0;
}