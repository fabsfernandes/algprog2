#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char marca[50];
    char cor[20];
    int nroP;
    float preco;
}carro;

int main (){
    carro c;
    FILE *fp;

    fp= fopen("Carro.bin","rb");
    if (fp==NULL) exit(1);
    fread(&c, sizeof(carro), 1, fp);

    printf("\nMarca: %s",c.marca);
    printf("\nCor: %s",c.cor);
    printf("\nNro Portas: %d",c.nroP);
    printf("\nPreco: %.2f",c.preco);

    fclose(fp);
    return 0;
}
