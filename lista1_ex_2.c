/*
(a) Copie o código acima e mostre o endereço da variável a de duas formas: uma usando &a e outra usando o ponteiro p. Os endereços devem ser os mesmos.
(b) Altere o valor da variável a usando o scanf sem usar o operador &.
(c) Utilizando a função scanf, altere o valor de 10 do vetor val para 20. Não use o operador & no scanf.
Utilize uma variável do tipo ponteiro para inteiro para guardar o endereço da posição do vetor.
(d) Mostre o mapa de memória deste código ao final da execução.
*/

#include <stdio.h>

int main()
{	
	int a = 40; // cria uma variável do tipo inteiro, chamada a, e inicializa com valor 40
 	int *p; // cria uma variável do tipo ponteiro para inteiro, chamada p, e o conteúdo inicial é lixo
 	p = &a; // faz p receber o endereço de a. Dizemos que p aponta para a

 	int val[5] = {2, 4, 6, 8, 10};

	unsigned long int endereco_de_val; // 64 bits

	int i;

	// exercicio 2a)
 	printf("Endereco de a usando &a: %d\n", &a);
 	printf("Endereco de a usando p: %d\n", p);

 	// exercicio 2b)
 	printf("Digite o novo valor de a: ");
 	scanf("%d", p);
 	printf("O novo valor de a eh: %d\n", *p);

 	// exercicio 2c)
 	p = val;
 	p = p+4;
 	printf("\nDigite o nro 20: ");
 	scanf("%d", p);

 	// imprime conteudo final de val
	printf("\nConteudo de val depois:\n");
	for(i=0; i<5; i++)
		printf("%d ", val[i]);
	printf("\n");

	// exercicio 2d)
 

}