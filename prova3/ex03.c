#include <stdio.h>

int main() {

    int i = 0, j = 0;
    int n = 0;

    scanf("%d", &n);

    for (i=0; i<n; i++) {
        for(j=0; j<=n-1; j++){
            if(i*j == 1 || (i*j) % n == 1 && i <= j){
                printf("(%d,%d)\n", i, j);
            } 
        }
    }

    return 0;
}