#include<stdio.h>

int main(){

    int num, n1, n2, n3, n4, n5,i;

    scanf("%d", &num);
    if(num > 99999){
        printf("NUMERO INVALIDO\n");
    }
    if(num > 9999 && num <= 99999){
        n1 = num / 10000;
        i = num % 10000;
        n2 = i / 1000;
        i = i % 1000;
        n3 = i / 100;
        i = i % 100;
        n4 = i / 10;
        n5 = i % 10;
       if(n1 == n5 && n2 == n4){
        printf("PALINDROMO\n");
       }else{
        printf("NAO PALINDROMO\n");
       }
    }
    if(num > 999 && num <= 9999){
        n1 = num / 1000;
        i = num % 1000;
        n2 = i / 100;
        i = i % 100;
        n3 = i / 10;
        n4 = i % 10;
        if(n1 == n4 && n2 == n3){
        printf("PALINDROMO\n");
        }else{
        printf("NAO PALINDROMO\n");
       }
    }
    if(num > 99 && num <= 999){
        n1 = num / 100;
        i = num % 100;
        n2 = i / 10;
        n3 = i % 10;
        if(n1 == n3){
        printf("PALINDROMO\n");
        }else{
        printf("NAO PALINDROMO\n");
       }
    }
    if(num > 9 && num <= 99){
        n1 = num / 10;
        n2 = num % 10;
        if(n1 == n2){
        printf("PALINDROMO\n");
        }else{
        printf("NAO PALINDROMO\n");
       }
    }
    if(num >= 0 && num <= 9){
        printf("PALINDROMO\n");
    }

    return 0;
}