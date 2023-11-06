#include <stdio.h>
#include <stdlib.h>

int soma (int n,int i){
    if (i==n)
        return 0;
    if (n%i == 0)
        return i+ soma(n,i+1);
    else return soma(n,i+1);
}

char quad (int n){
    if (n == soma(n,1))
        return 's';
    else return 'n';
}

int main(){
    int n;
    printf("Entre com o nro: ");
    scanf("%d",&n);

    if (quad(n) == 's')
        printf(" eh quadrado");
    else printf(" nao eh quadrado");

    return 0;
}


