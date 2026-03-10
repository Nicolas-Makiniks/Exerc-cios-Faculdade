#define _CRT_SECURE_NO_WARNINGS

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
Efetue um algoritmo que receba dois valores quaisquer e imprime
todos os valores intermediários a ele
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
	int menorNumero = 0, maiorNumero = 0;

	while (1) {
		while (1) {
			printf("\nInsira um número para contagem: ");
			if (scanf("%d", &menorNumero) == 1) {
				break;
			}
			printf("Entrada inválida! Insira um número.\n");
			clearBuffer();
			clearScreen();
		}

		while (1) {
			printf("\nInsira um segundo número para contagem: ");
			if (scanf("%d", &maiorNumero) == 1) {
				break;
			}
			printf("Entrada inválida! Insira um número.\n");
			clearBuffer();
			clearScreen();
		}

		if (menorNumero < maiorNumero) {
			for (int i = menorNumero; i <= maiorNumero; i++) {
				printf("%d\n", i);
			}
			break;
		}
		if (menorNumero > maiorNumero) {
			for (int i = maiorNumero; i <= menorNumero; i++) {
				printf("%d\n", i);
			}
			break;
		}

		printf("\nNúmeros iguais! Entrada inválida.\n");
		clearScreen();
	}

	system("pause");

	return 0;
}