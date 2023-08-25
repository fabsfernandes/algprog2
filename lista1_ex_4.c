/*
Utilize o conceito de desreferenciamento para alterar todo vetor val, subtraindo de cada elemento uma unidade
*/

#include <stdio.h>

int main()
{	
	int val[5] = {2, 4, 6, 8, 20};

	int *p;

	int i;

	p = val;

	// altera conteudo de val
	for(i=0; i<5; i++)
	{
		*p = *p-1;
		p++;
	}

	// imprime resultado final de val
	p = val;
	for(i=0; i<5; i++)
	{
		printf("%d ", *p);
		p++;
	}

}