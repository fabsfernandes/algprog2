#include<stdio.h>
#include<stdlib.h>

int main(){
    char *nome;
    FILE * fp;
    char c;
    nome = (char *)malloc(1000*sizeof(char));

    fp = fopen("resumo_TCC.txt", "r");
    if (fp == NULL ){
        printf("N�o foi poss�vel abrir o arquivo.\n");
        exit(1);  // for�a o t�rmino da execu��o da rotina
     }
    printf("Impress�o do arquivo: \n");
    c= fgetc(fp);
    while (c!=EOF){
        printf("%c",(char) c);
        c = fgetc(fp);
    }
    fclose(fp);
}
