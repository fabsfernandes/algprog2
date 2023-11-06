#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x, y;
} Ponto;


void imprime_ponto(Ponto p){
    printf("(%.2f,%.2f)", p.x, p.y);
}

void soma_ponto(Ponto p1, Ponto p2, Ponto *p3){
    p3->x = p1.x+ p2.x;
    p3->y = p1.y + p2.y;
}
int main(){
    Ponto p1,p2,pRes;

    printf("Digite o valor de x1: ");
    scanf("%f", &p1.x);
    printf("Digite o valor de y1: ");
    scanf("%f", &p1.y);
    printf("Digite o valor de x2: ");
    scanf("%f", &p2.x);
    printf("Digite o valor de y2: ");
    scanf("%f", &p2.y);
    printf(" A soma de ");
    imprime_ponto(p1);
    printf(" com ");
    imprime_ponto(p2);
    printf(" eh ");
    soma_ponto(p1,p2,&pRes);
    imprime_ponto(pRes);

    return 0;
}



