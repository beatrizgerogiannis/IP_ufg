#include <stdio.h>
#include <math.h>
 
int main(){
    double n, rk, ri = 1, cond, e;
    scanf("%lf %lf", &n, &e);
    do{
        rk = (ri + (n/ri))/ 2;
        cond = n - rk*rk;
        cond = sqrt(cond*cond);
        ri = rk;
        printf("r: %.9lf, err: %.9lf\n", rk, cond);
    }while(cond > e);
    return 0;
}