#include <stdio.h>
#include <stdlib.h>

int tam (char s[]){
    if (s[0] =='\0')
        return 0;
    return 1+tam(&s[1]);
}

int main(){
    char nome[100];
    printf("Entre com a string: ");
    scanf("%s",nome);

    printf(" O tamanho eh: %d",tam(nome));

    return 0;
}

