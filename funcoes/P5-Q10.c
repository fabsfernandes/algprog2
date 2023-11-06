#include <stdio.h>
#include <stdlib.h>

void multvet(int vet[], int n, int escalar){
    int i;
    for (i=0;i<n;i++){
        vet[i] = vet[i]*escalar;
    }
}
int main (){
    int *vet, i;
    int n, valor;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d",&n);
    vet = (int *)malloc(n*sizeof(int));
    if (vet==NULL)
        exit(1);

    printf("Entre com os elementos do vetor: ");
    for (i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    printf("Entre com o escalar: ");
    scanf("%d",&valor);

    multvet(vet,n,valor);
    printf("\n");
    for (i=0;i<n;i++){
        printf("%d\t",vet[i]);
    }

    return 0;
}

