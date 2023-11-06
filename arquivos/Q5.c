#include<stdio.h>
#include<stdlib.h>

int main(){
    char frase[50],nome[100];
    FILE * fp;
    int i,j,qtd;

    printf("Nome do arquivo: ");
    gets(nome);
    fp = fopen(nome, "w");
    if (fp == NULL ){
        printf("Não foi possível abrir o arquivo.\n");
        exit(1);  // força o término da execução da rotina
    }
    for (i=0;i<5;i++){
        gets(frase);
        for (j=0;j<strlen(frase);j++)
            frase[j] = toupper(frase[j]);
        fprintf (fp, "%d\t%s\n",strlen(frase),frase);
    }
    fclose(fp);
    fp = fopen(nome, "r");
    printf("Impressão do arquivo: \n");
    fscanf(fp,"%d\t",&qtd);
    while (!feof(fp)){
        printf("%d\t ",qtd);
        fscanf(fp,"%[^\n]",frase);
        printf("%s\n",frase);
        fscanf(fp,"%d\t",&qtd);
    }
}


