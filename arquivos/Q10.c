#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char descricao[50];
    int codigo;
    int qtde;
}mercadoria;

int main(){
    mercadoria *vet=NULL;
    int qtd = 0, opcao;
    int i;
    int cod, achou = 0,j;
    FILE *fp;
    do {
        printf("\n\nMenu: ");
        printf("\n1- Inserir produto");
        printf("\n2- Remover produto");
        printf("\n3- Relatorio Geral");
        printf("\n4- Produtos não disponiveis");
        printf("\n5- Diminuir qtde estoque produto");
        printf("\n6- Sair");
        printf("\ne Digite uma opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);
        switch (opcao){
        case 1:
            vet = realloc(vet,(qtd+1)*sizeof(mercadoria));
            if (vet == NULL) exit(1);
            printf("Descricao: ");
            gets(vet[qtd].descricao);
            printf("Nro: ");
            scanf("%d",&vet[qtd].codigo);
            printf("Qtde: ");
            scanf("%d",&vet[qtd].qtde);
            fflush(stdin);
            qtd++;
            break;
        case 2:
            printf("Entre com o codigo do produto a ser removido:");
            scanf("%d", &cod);
            for (i=0; i<qtd;i++){
                if (vet[i].codigo == cod){
                    achou = 1;
                    break;
                }
            }
            if (achou == 0){
                printf("Produto não encontrado");
            }
            else{
                for (j=i;j<qtd-1;j++){
                    vet[j]= vet[j+1];
                }
                qtd--;
                vet = (mercadoria *)realloc(vet,qtd*sizeof(mercadoria));
                if (vet == NULL) exit(1);
                printf("\n Produto removido");
            }
            break;
        case 3:
            for (i=0;i<qtd;i++){
               printf("\nDescricao: %s", vet[i].descricao);
               printf("\nNro: %d", vet[i].codigo);
               printf("\nQtde: %d", vet[i].qtde);
            }
            break;
        case 4:
            for (i=0;i<qtd;i++){
                    if (vet[i].qtde == 0){
                        printf("Descricao: %s", vet[i].descricao);
                        printf("Nro: %d", vet[i].codigo);
                    }
            }
            break;
        case 5:
            printf("Entre com o codigo do produto:");
            scanf("%d", &cod);
            for (i=0; i<qtd;i++){
                if (vet[i].codigo == cod){
                    achou = 1;
                    break;
                }
            }
            if (achou == 0){
                printf("Produto não encontrado");
            }
            else{
                vet[i].qtde--;
            }
        case 6:
            fp= fopen("mercadoria.bin","wb");
            if (fp==NULL) exit(1);
            fwrite(vet, sizeof(mercadoria), qtd, fp);
            fclose(fp);
            break;
        default: printf("opção inválida");
    }
    } while (opcao!=6);
    return 0;
}


