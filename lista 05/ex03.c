#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tradutor{
    char pais[32];
    char expressao[128];
};
typedef struct tradutor str_T;

int main(){

    char pais_atual[50];
    int i;

    str_T v[24]={
    {"brasil", "Feliz Natal!"},
    {"alemanha", "Frohliche Weihnachten!"},
    {"austria", "Frohe Weihnacht!"},
    {"coreia", "Chuk Sung Tan!"},
    {"espanha", "Feliz Navidad!"},
    {"grecia", "Kala Christougena!"},
    {"estados-unidos", "Merry Christmas!"},
    {"inglaterra", "Merry Christmas!"},
    {"australia", "Merry Christmas!"},
    {"portugal", "Feliz Natal!"},
    {"suecia", "God Jul!"},
    {"turquia", "Mutlu Noeller"},
    {"argentina", "Feliz Navidad!"},
    {"chile", "Feliz Navidad!"},
    {"mexico", "Feliz Navidad!"},
    {"antardida", "Merry Christmas!"},
    {"canada", "Merry Christmas!"},
    {"irlanda", "Nollaig Shona Dhuit!"},
    {"belgica", "Zalig Kerstfeest!"},
    {"italia", "Buon Natale!"},
    {"libia", "Buon Natale!"},
    {"siria", "Milad Mubarak!"},
    {"marrocos", "Milad Mubarak!"},
    {"japao", "Merii Kurisumasu!"},
    };

    while(EOF != scanf("%s", pais_atual)){
        for(i=0; i<24; i++){
            if(strcmp(pais_atual, v[i].pais) == 0){
                printf("%s\n", v[i].expressao);
                break;
            }
        }
        if(i==24){
            printf("-- NOT FOUND --\n");
        }
    }

    return 0;
}