#include<stdio.h>
#include<stdlib.h>

int main(){
    char dialogo[20];
    char fim[] = "\n";
    int n,i;
    FILE * fp;

    printf("Quantas senten�as de dialogos vc quer armazenar: ");
    scanf("%d",&n);
    fflush(stdin);
    fp = fopen("dialogo.txt", "w");
    if (fp == NULL ){
        printf("N�o foi poss�vel abrir o arquivo.\n");
        exit(1);  // for�a o t�rmino da execu��o da rotina
     }
    printf("Leitura: \n");
    for (i=0;i<n;i++){
        gets(dialogo);
        fputs(dialogo, fp);
        fputs(fim,fp);
    }
    fclose(fp);
}
