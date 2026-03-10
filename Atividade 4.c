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
	float numero = 0, resultado = 0;

	while (1) {
		printf("Soma atual: %.2f\n", resultado);
		printf("Digite um número real positivo para soma: ");
		if (scanf("%f", &numero) == 1) {
			if (numero >= 0) {
				resultado += numero;
			}
			else {
				clearBuffer();
				clearScreen();
				break;
			}
		}
		else {
			printf("Entrada inválida! Insira um número.\n");
			clearScreen();
		}
		clearBuffer();
		system("cls");

	}

	printf("Soma final: %.2f\n", resultado);
	system("pause");

	return 0;
}