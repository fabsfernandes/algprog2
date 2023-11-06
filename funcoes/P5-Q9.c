#include <stdio.h>
#include <stdlib.h>

void maior_menor(int vet[], int n,int *maior, int *menor){
    int i;
    if (n> 1){
        *maior = vet[0];
        *menor = vet[0];
    }
    for (i=1;i<n;i++){
        if (vet[i]> *maior)
            *maior = vet[i];
        if (vet[i]< *menor)
            *menor = vet[i];
    }
}
int main (){
    int *vet, i;
    int n,maior,menor;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d",&n);
    vet = (int *)malloc(n*sizeof(int));
    if (vet==NULL)
        exit(1);

    printf("Entre com os elementos do vetor: ");
    for (i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    maior_menor(vet,n,&maior,&menor);
    printf("\n Maior: %d",maior);
    printf("\n Menor: %d",menor);

    return 0;
}
