#include <stdio.h>
#include <stdlib.h>

int quadrado (int n, int i){
    if (n==0)
        return 0;
    return i+ quadrado(n-1,i+2);
}

int main(){
    int n;
    printf("Entre com um nro: ");
    scanf("%d",&n);

    printf(" O quadrado eh: %d",quadrado(n,1));

    return 0;
}
