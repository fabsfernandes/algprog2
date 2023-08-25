/*
Utilizando o conceito de desreferenciamento, continue o exercício 1, mostrando agora todo o vetor val em um printf, mas com o segundo argumento sendo um ponteiro para os elementos de val. Não use a variável val. Mostre o mapa de memória deste código ao final da execução
*/

#include <stdio.h>

int main()
{	
	int val[5] = {2, 4, 6, 8, 20};

	int *p;

	p = val;

	int i;

	for(i=0; i<5; i++)
	{
		printf("%d ", *p);
		p++;
	}	

 

}