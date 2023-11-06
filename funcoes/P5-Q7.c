#include <stdio.h>
#include <stdlib.h>

void incp (float *nro, float alt){
    float r;
    *nro = *nro + (*nro)*alt/100;

}

int main(){
    float nro, alteracao,res;

    printf("Digite o numero: ");
    scanf("%f", &nro);
    printf("Digite o percentual de alteracao: ");
    scanf("%f", &alteracao);
    incp(&nro,alteracao);
    printf("O valor alterado eh: %.2f", nro);
    return 0;
}

