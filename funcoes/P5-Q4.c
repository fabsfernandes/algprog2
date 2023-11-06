#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x, y;
} Ponto;


void imprime_ponto(Ponto p){
    printf("(%.2f,%.2f)", p.x, p.y);
}

int main(){
    Ponto p;

    printf("Digite o valor de x: ");
    scanf("%f", &p.x);
    printf("Digite o valor de y: ");
    scanf("%f", &p.y);
    printf(" O ponto digitado eh: ");
    imprime_ponto(p);

    return 0;
}


