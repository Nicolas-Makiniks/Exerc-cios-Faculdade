#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

#define MATRIZ_ROWS 3
#define MATRIZ_COLLS 3

/*
	Exercício 2 – Soma dos elementos
		• Leia uma matriz 3x3 e calcule a soma de todos os seus elementos.
		• A soma total dos valores armazenados.
*/

void clearBuffer() {
	uint8_t clearBuffer;

	while ((clearBuffer = getchar()) != '\n' && clearBuffer != EOF);
}

uint8_t main(uint8_t argc, uint8_t* argv[]) {
	setlocale(LC_ALL, "pt-br");

	uint8_t getNumber = 1;
	uint8_t row = 0;
	uint8_t coll = 0;

	int32_t matriz[MATRIZ_ROWS][MATRIZ_COLLS] = { 0 };

	int64_t sumMatriz = 0;

	while (getNumber == 1) {
		printf("Digite um número inteiro para posição na matriz[%hhd][%hhd]: ", row, coll);
		if ((scanf("%d", &matriz[row][coll])) != 1) {
			printf("Digite um número válido!\n");
			clearBuffer();
			continue;
		}

		coll++;
		if ((coll % MATRIZ_COLLS) == 0) {
			row++;
			coll = 0;
			printf("\n");
		}
		if (row == MATRIZ_ROWS) {
			getNumber = 0;
		}
	}

	printf("\nValores da matriz:\n");
	for (uint8_t line = 0; line < MATRIZ_ROWS; line++) {
		for (uint8_t column = 0; column < MATRIZ_COLLS; column++) {
			printf("%10d ", matriz[line][column]);
			sumMatriz += matriz[line][column];
		}
		printf("\n");
	}

	printf("\nValor da soma de todos os valores da matriz: %lld\n", sumMatriz);

	system("pause");

	return 0;
}