#include<stdio.h>
#include<stdlib.h>

int main(){
    char dialogo[20];
    char fim[] = "\n";
    int n,i;
    FILE * fp;

    printf("Quantas sentenças de dialogos vc quer armazenar: ");
    scanf("%d",&n);
    fflush(stdin);
    fp = fopen("dialogo.txt", "w");
    if (fp == NULL ){
        printf("Não foi possível abrir o arquivo.\n");
        exit(1);  // força o término da execução da rotina
     }
    printf("Leitura: \n");
    for (i=0;i<n;i++){
        gets(dialogo);
        fputs(dialogo, fp);
        fputs(fim,fp);
    }
    fclose(fp);
}
