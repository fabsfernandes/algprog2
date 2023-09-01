#include <stdio.h>

int main()
{
	void *meu_ponteiro;

	printf("Digite um número inteiro: ");
	scanf("%d", meu_ponteiro);
	printf("Número lido: %d", *(int *)meu_ponteiro);

	printf("Digite um número inteiro: ");
	scanf("%lf", meu_ponteiro);
	printf("Número lido: %lf", *(double *)meu_ponteiro);
}