#include <stdio.h>
#include <math.h>

int main(){

    int k, y=1, fat = 1, i=0;
    double cos, soma=0, n, x;
    scanf("%lf %lf", &x, &n);

    for(k = 0; k <=n; k++){ 
          for(i=1; i<=k*2; i++){
            fat *= i;
          }
          cos = (pow(-1,k)*(pow(x,2*k))/(fat));
          soma += cos;
          fat = 1;
    }

    printf("cos(%.2lf) = %.6lf", x, soma);

    return 0;
}