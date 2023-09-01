/*
Utilizando aritmética de ponteiros, mostre na tela o conteúdo da string char nome[] = “José Augusto”. Utilize o printf com %c e não %s
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char nome[] = "José Augusto";
	int i;

	for(i=0; i<13; i++)
	{
		printf("%c", *(nome+i));
	}
	printf("\n");

}