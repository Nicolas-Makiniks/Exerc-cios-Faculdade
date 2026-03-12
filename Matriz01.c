#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

/*
	Faça um programa em C para ler e imprimir uma matriz 2x4 de números inteiros.
*/

void clearBuffer() {
	char clearBuffer;
	while ((clearBuffer = getchar()) != '\n' && clearBuffer != EOF);
}

void clearScreen() {
	system("pause");
	system("cls");
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "pt-br");

	uint8_t isNumber = 0;
	int64_t matriz[2][4] = { 0 };

	printf("Tamanho reservado para matriz de %llu bytes\n", sizeof(matriz));

	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < 4; j++) {

			while (isNumber == 0) {
				printf("Digite um número inteiro para posição da matriz[%hhu][%hhu]: ", i, j);
				if (scanf("%lld", &matriz[i][j]) == 1) {
					isNumber = 1;
					break;
				}
				printf("Digite um número válido!\n");
				clearBuffer();
				clearScreen();
			}

			isNumber = 0;
		}

		printf("\n");
	}

	printf("Sua matriz é:\n");

	for (int i = 0; i <= 2; i++) {
		if (i == 0) {
			printf("  Indices  ");
		}
		else {
			printf("\t%hhu |", i - 1);
		}
		for (int j = 0; j < 4; j++) {
			if (i != 0) {
				printf("%-21lld |", matriz[i - 1][j]);
			}
			else {
				printf("%-21hhu  ", j);
			}
		}
		printf("\n");
	}

	return 0;
}