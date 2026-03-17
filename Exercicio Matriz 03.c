#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

#define MATRIZ_ROWS 3
#define MATRIZ_COLLS 3

/*
	Exercício 3 – Diagonal principal
		Leia uma matriz 3×3 e exiba somente os valores da diagonal principal.
		Dica: A diagonal principal ocorre quando o índice da linha é igual ao da coluna (i == j).
*/

void clearBuffer() {
	int8_t clearBuffer;

	while ((clearBuffer = getchar()) != '\n' && clearBuffer != EOF);
}

int8_t main(int8_t argc, int8_t* argv[]) {
	setlocale(LC_ALL, "pt-br");

	uint8_t getNumber = 1;
	uint8_t row = 0;
	uint8_t coll = 0;

	int32_t matriz[MATRIZ_ROWS][MATRIZ_COLLS] = { 0 };

	while (getNumber == 1) {
		printf("Digite um valor para posição na matriz[%hhu][%hhu]: ", row, coll);
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
		}
		printf("\n");
	}

	printf("\nValores da diagonal principal: ");
	for (uint8_t line = 0; line < MATRIZ_ROWS; line++) {
		for (uint8_t column = 0; column < MATRIZ_COLLS; column++) {
			if (line == column) {
				printf("%d ", matriz[line][column]);
			}
		}
	}
	printf("\n");

	system("pause");

	return 0;
}