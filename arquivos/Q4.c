#include<stdio.h>
#include<stdlib.h>

int main(){
    char nome[100];
    FILE * fp;
    int contC=0, contA=0;
    char c;

    printf("Nome do arquivo: ");
    gets(nome);
    fp = fopen(nome, "r");
    if (fp == NULL ){
        printf("N�o foi poss�vel abrir o arquivo.\n");
        exit(1);  // for�a o t�rmino da execu��o da rotina
     }
    printf("Impress�o do arquivo: \n");
    c= fgetc(fp);
    while (c!=EOF){
        if ((c == 'A')|| (c == 'a'))
            contA++;
        contC++;
        c = fgetc(fp);
    }
    printf("\n Nro caracteres: %d",contC);
    printf("\n Nro de ocorrencias do A: %d",contA);
    fclose(fp);
}

