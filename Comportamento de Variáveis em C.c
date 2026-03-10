#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Padronização de tamanhos através da biblioteca stdint.h
	e macros de valores maximos/minimos por comprimento de byte
*/

//Responsavel por remover todos os caracteres presentes no buffer de entrada.
void clearBuffer() {
	char clearBuffer;
	while ((clearBuffer = getchar()) != '\n' && clearBuffer != EOF) {}
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "pt-br");

	long long int userInputNumber = 1; //Valor qualquer diferente de zero apenas para entrar no loop while()

	printf("Inicializando variáveis em seu menor valor.\n");
	unsigned char semSinal = 0;		// 1 byte (8 bits) sem sinal (unsigned) varia de 0 a 255
	char comSinal = -128i8;			// 1 byte (8 bits) com sinal (signed) varia de -128 a 127

	printf("Valor semSinal: %hhu\n", semSinal);
	printf("Valor comSinal: %hhd\n", comSinal);

	while (userInputNumber != 0) {
		printf("\nDigite um valor para soma ou zero para sair: ");

		if (scanf("%lld", &userInputNumber) != 1) {
			printf("Insira um número válido!\n\n");
			clearBuffer();
			continue;
		}

		semSinal += userInputNumber;
		comSinal += userInputNumber;

		printf("\nValores atualizados:\n");
		printf("Valor semSinal: %hhu\n", semSinal);
		printf("Valor comSinal: %hhd\n", comSinal);
	}

	return 0;
}