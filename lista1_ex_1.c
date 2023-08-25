/*
Crie um programa que contenha a seguinte variável int val[5] = {2,4,5,8,10}
Utilizando a função Scanf, altere o valor de 5 para 6. Não use o operador & no scanf. Utilize uma variável do tipo unsigned int para guardar o endereço da posição do vetor.
*/
#include <stdio.h>

int main(){

	int val[5] = {2, 4, 5, 8, 10};

	unsigned long int endereco_de_val; // 64 bits

	int i;

	// imprime conteudo inicial de val
	printf("Conteudo de val antes:\n");
	for(i=0; i<5; i++)
		printf("%d ", val[i]);
	printf("\n");

	
	// val[2]: 2 posicoes de 4 bytes (int) cada	
	endereco_de_val = val;
	endereco_de_val = endereco_de_val + 2*4; 
	
	// captura o valor 6
	printf("\nDigite o nro 6: ");
	scanf("%d", endereco_de_val);

	// imprime conteudo final de val
	printf("\nConteudo de val depois:\n");
	for(i=0; i<5; i++)
		printf("%d ", val[i]);
	printf("\n");

}
