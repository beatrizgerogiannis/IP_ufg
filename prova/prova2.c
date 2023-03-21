#include <stdio.h>

int main(){

    float n, x, y, a1, a2, ak, i=0;
    scanf("%f %f %f %f %f", &n, &x, &y, &a1, &a2);

    printf("%.0f,%.0f", a1, a2);

    while(i < n-2){
        if(i != n-2){
            printf(",");
        }
        ak = (x*a2) + (y * a1); 
        if(i != n-3){
            printf("%.0f", ak);
        }else{
            printf("%.0f", ak);
        }
        
        a2 = a1;
        a1 = ak;
        i++;
    }
    


    return 0;
}