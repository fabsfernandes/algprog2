#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void abs_vet(int vet[], int n){
    int i;
    for (i=0;i<n;i++){
        vet[i] = abs(vet[i]);
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

    abs_vet(vet,n);
    printf("\n");
    for (i=0;i<n;i++){
        printf("%d\t",vet[i]);
    }

    return 0;
}


