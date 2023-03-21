#include <stdio.h>

int main(){

    int n ,x = 0, y = 0;
    double mp = 0, mi=0;

    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        if(n%2 == 0 && n!= 0){
                mp += n;
                x++;
        }else{
            mi += n;
            y++;
        }
    }

    if(x != 0){
        mp = mp / x;
    }
    if(y != 0){
        mi = mi /y;
    }

    printf("MEDIA PAR: %lf\n", mp);
    printf("MEDIA IMPAR: %lf\n", mi);

    return 0;
}