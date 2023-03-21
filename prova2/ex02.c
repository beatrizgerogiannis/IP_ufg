#include <stdio.h>

int main(){

    int i ,num, x, y, a1, a2, ak;
    scanf("%d", &num);

    scanf("%d %d %d %d", &x, &y, &a1, &a2);

    if(num == 2){
        printf("%d,%d", a1, a2);
    }else{
        printf("%d,%d,", a1, a2);
    }
    

    for(i=0; i<num-2; i++){
        ak = x*a2 + y*a1;
        printf("%d", ak);
        if(i!=num-3){
            printf(",");
        }

        a1 = a2;
        a2 = ak;

    }

    return 0;
}