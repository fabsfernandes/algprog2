#include <stdio.h>
#include <stdlib.h>

int nrocorrencia(char s[], char c){
    if (s[0] =='0')
        return 0;
    if (s[0] == c)
        return 1+nrocorrencia(&s[1],c);
    else nrocorrencia(&s[1],c);
}

int main(){
    char nome[100];
    char c;

    printf("Entre com o caracter: ");
    scanf("%c",&c);

    printf("Entre com a string: ");
    scanf("%s",nome);

    printf(" Nro de ocorrencias: %d",nrocorrencia(nome,c));

    return 0;
}


