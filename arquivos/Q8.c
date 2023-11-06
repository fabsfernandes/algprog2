#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char profissao[50];
    int tempoS;
}funcionario;

int main(){
    funcionario *vet;
    funcionario f;
    int N,i;
    FILE *fp;

    printf("Nro de func: ");
    scanf("%d",&N);
    fflush(stdin);
    vet = (funcionario *)malloc(N*sizeof(funcionario));
    if (vet == NULL) exit(1);

    for (i=0;i<N;i++){
        printf("profissao: ");
        gets(vet[i].profissao);
        printf("tempo serviço: ");
        scanf("%d",&vet[i].tempoS);
        fflush(stdin);
    }
    fp= fopen("emp.bin","wb");
    if (fp==NULL) exit(1);
    fwrite(vet, sizeof(funcionario), N, fp);
    fclose(fp);

    fp= fopen("emp.bin","rb");
    if (fp==NULL) exit(1);
    while (fread(&f,sizeof(funcionario),1,fp)==1){
        printf("\ntempo de servico: %d",f.tempoS);
        printf("\nprofissao: %s", f.profissao);
    }
    close(fp);
    return 0;
}
