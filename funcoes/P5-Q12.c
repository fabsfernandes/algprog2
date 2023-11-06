#include <stdio.h>
#include <stdlib.h>

int fatorial (int n){
    if (n==0)
        return 1;
    return n* fatorial(n-1);
}

int somatorio(int n){
    if (n==0)
        return 0;
    return n+ somatorio(n-1);
}

int main(){
    int n, opcao;
    printf("Entre com um nro: ");
    scanf("%d",&n);

    printf("Digite 1 para Fatorial e 2 para Somatorio: ");
    scanf("%d",&opcao);

    switch (opcao){
    case 1:
        printf("Fatorial: %d", fatorial(n));
        break;
    case 2:
        printf("Somatorio: %d", somatorio(n));
        break;

    default: return 0;

    }

    return 0;
}
