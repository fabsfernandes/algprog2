#include<stdio.h>
#include<stdlib.h>

int main(){

    char *nome;
    FILE * fp;

    nome = (char *)malloc(1000*sizeof(char));

    printf("Entre com o resumo do texto: \n");
    gets(nome);

    fp = fopen("resumo_TCC.txt", "w");
    if (fp == NULL ){
        printf("N�o foi poss�vel abrir o arquivo.\n");
        exit(1);  // for�a o t�rmino da execu��o da rotina
     }
    fputs(nome, fp);
    fclose(fp);

}
