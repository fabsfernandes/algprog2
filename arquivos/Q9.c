#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char nome[50];
    float notaF;
}aluno;

int main(){
    aluno *vet;
    aluno a;
    int N,i;
    FILE *fp;
    float maiorN = 0;
    char nomeM[50];

    printf("Nro de alunos: ");
    scanf("%d",&N);
    fflush(stdin);
    vet = (aluno *)malloc(N*sizeof(aluno));
    if (vet == NULL) exit(1);

    for (i=0;i<N;i++){
        printf("Nome: ");
        gets(vet[i].nome);
        printf("Nota final: ");
        scanf("%f",&vet[i].notaF);
        fflush(stdin);
    }
    fp= fopen("aluno.bin","wb");
    if (fp==NULL) exit(1);
    fwrite(vet, sizeof(aluno), N, fp);
    fclose(fp);

    fp= fopen("aluno.bin","rb");
    if (fp==NULL) exit(1);
    while (fread(&a,sizeof(aluno),1,fp)==1){
        printf("\nnome aluno: %s", a.nome);
        printf("\nnota: %2.f",a.notaF);
        if (a.notaF > maiorN){
            maiorN = a.notaF;
            strcpy(nomeM,a.nome);
        }
    }
    if (maiorN > 0)
        printf("\nNome do aluno com maior nota: %s", nomeM);
    close(fp);
    return 0;
}

