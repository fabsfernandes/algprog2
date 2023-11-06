#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    int fat=1,i;
    if (n==0)
        return fat = 1;

    for (i=1;i<=n;i++){
        fat*=i;
    }
    return fat;

}
float neperiano (int n){
    int i;
    float r=0;
    for (i=0;i<n;i++){
        r+= (float)(1)/fatorial(i);
    }
    return r;
}

int main(){
    int nro;
    float res;

    printf("Entre com o nro de termos da serie: ");
    scanf("%d", &nro);

    res = neperiano(nro);
    printf("O resultado da série eh: %f", res);
    return 0;
}

