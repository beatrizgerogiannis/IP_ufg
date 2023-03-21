#include <stdio.h>
#include <math.h>

double raizesEq2Grau(double a, double b, double c){
    double delta, x1, x2; 
    if (a == 0 && b == 0 && c == 0){
        printf("RAIZ UNICA\nX1 = 0");
    }
 
    delta = (b*b) - (4 * a * c);
 
    if(delta < 0){
        printf("RAIZES IMAGINARIAS\n");
    }
    if(delta == 0){
        x1 = -b / (2*a); 
        printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    }
    if(delta > 0){
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        if(x1 < x2){
        printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
        }else{
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x2, x1);
        }
    }    
}

int main(){
    double a, b, c; 
    scanf("%lf %lf %lf",&a , &b, &c);
    raizesEq2Grau(a,b,c);

    return 0;
}