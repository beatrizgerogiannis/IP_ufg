#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int i, v[5000];
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }

    int j,k, cont=0, eu=0;
    for(j=0;j<n;j++){
        for(k=0;k<n;k++){
            if(v[j] == v[k]){
                cont++;
            }
        }
        if(cont <= 1){
            eu++;
        }
        cont=0;
    }
    printf("%d", eu);

    return 0;
}