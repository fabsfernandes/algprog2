#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char marca[50];
    char cor[20];
    int nroP;
    float preco;
}carro;

int main(){
    carro c;
    FILE *fp;

    printf("Marca: ");
    scanf("%s",c.marca);
    printf("Cor: ");
    scanf("%s",c.cor);
    printf("Nro Portas: ");
    scanf("%d",&c.nroP);
    printf("Preco: ");
    scanf("%f",&c.preco);

    fp= fopen("Carro.bin","wb");
    if (fp==NULL) exit(1);

    fwrite(&c, sizeof(carro), 1, fp);

    fclose(fp);
    return 0;
}
