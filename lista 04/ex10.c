    #include <stdio.h>
     
    int main(){
        int num1, num2;
        int l, c, aux1 = 1, aux2 = 0, cont = 0, total;
        int aux3 = 0, max;
        int M[10][10];
         
        scanf("%d%d", &num1, &num2);
        if(num1 < 1 || num2 <= 0){
            printf("Dimensao invalida");
            return 0;
        } else if (num1 > 10 || num2 > 10){
            printf("Dimensao invalida");
            return 0;
        }
        
        total = num1 * num2;
        max = total;
        if(num1 > 0 || num2 > 0){
            for(l = 0; l < num1; l++){
                for(c = 0; c < num2; c++){
                    scanf("%d", &M[l][c]);
                }
            }
            total = num1 * num2;
        }
         
        for(;;){
            //epd
            l = aux2;
            for(c = aux2; c < num2-aux2; c++){
                printf("%d", M[l][c]);
                cont++;
                if(cont < total){
                    printf(" ");        
                }else if(cont == total){
                goto END;
                }
            }
         
            //cpb
            c = num2 - aux1;
            for(l = aux1; l < num1-aux2; l++){
                printf("%d", M[l][c]);
                cont++;
                if(cont < total){
                    printf(" ");
                }
                else if(cont == total){ 
                    goto END;
                }
            }
            
            //dpe
            l = num1-aux1;
            for(c = num2-1-aux1; c >= aux2; c--){
                printf("%d", M[l][c]);
                cont++;
                if(cont < total){
                    printf(" ");
                }
                else if(cont == total){
                    goto END;
                }
            }
            
            //bpc
            c = aux2;
            for(l = num1-1-aux1; l >= aux1; l--){
                printf("%d", M[l][c]);
                cont++;
                if(cont < total){
                    printf(" ");
                }
                else if(cont == total){
                    goto END;
                }
            }
         
            aux1++;
            aux2++;
            aux3++;
            max--;
         
        } END:
        printf("\n");
     
        return 0;
    }
