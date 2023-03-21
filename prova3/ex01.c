#include <stdio.h>

int bissexto(int dia, int mes, int ano){
    if(ano % 4 == 0 && ano % 100 == 0){
        if(ano % 400 == 0){
                return 1;
        }else{
            return 0;        
       }
    }else if(ano % 4 == 0 && ano % 100 != 0){
        return 1;
    }
    return 0;
}

int main(){

    int dia, mes, ano, bi;
    scanf("%d %d %d", &dia, &mes, &ano);

    bi = bissexto(dia, mes, ano);
    
    if(ano >= 1900 && ano <= 2036){
        if(bi == 1){
            if(mes >= 1 && mes <= 12){
                if(mes == 2){
                    if(dia >= 1 && dia <= 29){  
                        printf("%d/%d/%d\n", dia, mes, ano);
                    }else{
                        printf("DATA INVALIDA\n");
                    }
                }else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                    if(dia >= 1 && dia <= 31){
                        printf("%d/%d/%d\n", dia, mes, ano);
                    }else{
                        printf("DATA INVALIDA\n");
                    }
                }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                    if(dia >= 1 && dia <= 30){
                        printf("%d/%d/%d\n", dia, mes, ano);
                    }else{
                        printf("DATA INVALIDA\n");
                    }
                }
            }else{
                printf("DATA INVALIDA\n");
            }
        }

        if(bi == 0){
            if(mes >= 1 && mes <= 12){
                if(mes == 2){
                    if(dia >= 1 && dia <= 28){
                        printf("%d/%d/%d\n", dia, mes, ano);
                    }else{
                        printf("DATA INVALIDA\n");
                    }
                }else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                    if(dia >= 1 && dia <= 31){
                        printf("%d/%d/%d\n", dia, mes, ano);
                    }else{
                        printf("DATA INVALIDA\n");
                    }
                }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                    if(dia >= 1 && dia <= 30){
                        printf("%d/%d/%d\n", dia, mes, ano);
                    }else{
                        printf("DATA INVALIDA\n");
                    }
                }
            }else{
                printf("DATA INVALIDA\n");
            }
        }
    }else{
        printf("DATA FORA DO INTERVALO ESTIPULADO\n");
    }

    return 0;
}