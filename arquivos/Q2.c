#include<stdio.h>
#include<stdlib.h>

int main(){
    char *nome;
    FILE * fp;
    char c;
    nome = (char *)malloc(1000*sizeof(char));

    fp = fopen("resumo_TCC.txt", "r");
    if (fp == NULL ){
        printf("Não foi possível abrir o arquivo.\n");
        exit(1);  // força o término da execução da rotina
     }
    printf("Impressão do arquivo: \n");
    c= fgetc(fp);
    while (c!=EOF){
        printf("%c",(char) c);
        c = fgetc(fp);
    }
    fclose(fp);
}
