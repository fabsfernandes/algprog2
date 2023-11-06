#include <stdio.h>
#include <stdlib.h>


void troca(int *x1, int *x2){
    int aux;
    aux = *x1;
    *x1 = *x2;
    *x2 = aux;

}
int main(){
    int A,B;

    printf("Digite o nro A: ");
    scanf("%d", &A);
    printf("Digite o nro B: ");
    scanf("%d", &B);
    troca(&A,&B);
    printf("\n O numero A eh: %d:", A);
    printf("\n O numero B eh: %d:", B);

    return 0;
}




