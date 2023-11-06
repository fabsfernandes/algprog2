#include <stdio.h>
#include <stdlib.h>

int incp (float nro, float alt){
    float r;
    r = nro + nro*alt/100;

    return r;
}

int main(){
    float nro, alteracao,res;

    printf("Digite o numero: ");
    scanf("%f", &nro);
    printf("Digite o percentual de alteracao: ");
    scanf("%f", &alteracao);
    res = incp(nro,alteracao);
    printf("O valor alterado eh: %.2f", res);
    return 0;
}

