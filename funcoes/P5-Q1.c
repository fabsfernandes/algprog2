#include <stdio.h>
#include <stdlib.h>

int exponenciacao (int b, int e){
    int r=1, i;
    for (i=0;i<e;i++){
        r*= b;
    }
    return r;
}

int main(){
    int base, expoente,res;

    printf("Entre com a base: ");
    scanf("%d", &base);
    printf("Entre com a expoente: ");
    scanf("%d", &expoente);
    res = exponenciacao(base,expoente);
    printf("O resultado da exponenciacao eh: %d", res);
    return 0;
}
