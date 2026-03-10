#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
	Semelhante a uma struct é possível definir campos de dados,
	porém seu diferencial é ocupar somente um espaço na memória
	que é correspondente a maior memória alocada, e durante sua execução
	poder alterar o valor alocado na memória sobreescrevendo os anteriores.
	
	Exemplo abaixo:
*/
union {
	int i;			//Um tipo inteiro de 4 bytes
	float f;		//Um tipo float de 4 bytes
	char str[20];	//Um vetor de char de 20 bytes
	//Totalizando no final 20 bytes reservados para o tipo declarado "Dados"
} data;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "pt-br");

	printf("Tamanho inicial de \"data\": %lld bytes\n\n", sizeof(data));


	data.i = 10i32;

	printf("Registrando um int %d:\n", data.i);
	printf("data.i: %d\n", data.i); // Resultado correto
	printf("data.f: %.2f\n", data.f); // Resultado inconsistente
	printf("data.str: %s\n", data.str); // Resultado inconsistente

	data.f = 220.5f; // Sobrescreve data.i

	printf("Registrando um float %.2f:\n", data.f);
	printf("data.i: %d\n", data.i); // Resultado inconsistente
	printf("data.f: %.2f\n", data.f); // Resultado correto
	printf("data.str: %s\n\n", data.str); // Resultado inconsistente

	strcpy(data.str, "Programação em C"); // Sobrescreve data.f

	printf("Registrando uma string \"%s\":\n", data.str);
	printf("data.i: %d\n", data.i); // Resultado inconsistente
	printf("data.f: %.2f\n", data.f); // Resultado inconsistente
	printf("data.str: %s", data.str); // Resultado inconsistente

	printf("data.str: %s\n\n", data.str); // Resultado correto

	printf("Tamanho final de \"data\": %lld bytes\n\n", sizeof(data));

	system("pause");

	return 0;
}