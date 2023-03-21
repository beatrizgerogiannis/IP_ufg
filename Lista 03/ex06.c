#include <stdio.h>
#include <string.h>

#define t 4
char one[t] = {'o','n','e'};
char two[t] = {'t','w','o'};

int main(){

    int n,i,j, cont=0, cont2=0;
    char str[6];
    
    scanf("%d%*c", &n);

    while(n--){
        cont = 0;
        cont2=0;
        scanf("%s", str);
        for(i=0; i<strlen(str); i++){
            if(str[i] == one[i]){
                cont++;
            }
            if(str[i] == two[i]){
                cont2++;
            }
        }
        if(strlen(str) >= 5){
            printf("3\n");
        } else if(cont > cont2){
            printf("1\n");
        }else if(cont2 > cont){
            printf("2\n");
        }
    }

    return 0;
}