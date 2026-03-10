#define _CRT_SECURE_NO_WARNINGS

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
Efetue um algoritmo que receba dois valores quaisquer e efetue sua multiplicação
utilizando para isso apenas o operador “+”
*/

void clearScreen() {
	system("pause");
	system("cls");
}

void clearBuffer() {
	char clearBuffer;
	while ((clearBuffer = getchar()) != '\n' && clearBuffer != EOF) {}
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "portuguese");
	int numero = 0, multiplicador = 0, resultado = 0;

	while (1) {
		printf("Digite um número: ");
		if (scanf("%d", &numero) == 1) {
			break;
		}
		printf("Entrada inválida! Insira um número.\n");
		clearBuffer();
		clearScreen();
	}

	while (1) {
		printf("Deseja multiplicar %d quantas vezes? ", numero);
		if (scanf("%d", &multiplicador) == 1) {
			break;
		}
		printf("Entrada inválida! Insira um número.\n");
		clearBuffer();
		clearScreen();
	}

	for (int i = 0; i < multiplicador; i++) {
		resultado += numero;
	}

	printf("\nValor final: %d\n", resultado);
	system("pause");

	return 0;
}