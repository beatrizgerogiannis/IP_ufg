#include <stdio.h>
#include <string.h>

#define V 5
#define C 21

int main(){
    
    int n, vogais, cons, letras, cont, i, j;
    char v[V]={'a','e','i','o','u'}; 
    char c[C]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};

    scanf("%d", &n);

    char p[n];

    while(n--){
        vogais=0, cons=0, letras=0;
        /*getchar();*/
        scanf("%[^\n]", p);
        //scanf("%s", p);
        for(i=0; i<strlen(p); i++){
            for(j=0; j<V; j++){
                if(v[j]==p[i] || v[j]-32==p[i]){
                    vogais++;
                    letras++;
                    break;
                }
            }
            for(j=0; j<C; j++){
                if(c[j]==p[i] || c[j]-32==p[i]){
                    cons++;
                    letras++;
                    break;
                }
            }
        }
        printf("Letras = %d\n", letras);
        printf("Vogais = %d\n", vogais);
        printf("Consoantes = %d\n", cons);
    }

    return 0;
}