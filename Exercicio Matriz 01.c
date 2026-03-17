#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

#define MATRIZ_ROWS 2
#define MATRIZ_COLLS 3

/*
	Exercício 1 – Leitura e exibição
	Crie um programa que leia os elementos de uma matriz 2x3 e mostre o conteúdo na tela.
*/

void clearBuffer() {
	int8_t clearBuffer;

	while ((clearBuffer = getchar()) != '\n' && clearBuffer != EOF);
}

uint8_t main(uint32_t argc, int8_t* argv[]) {
	setlocale(LC_ALL, "pr-br");

	uint8_t getNumber = 1;
	uint8_t row = 0;
	uint8_t coll = 0;

	int32_t matriz[MATRIZ_ROWS][MATRIZ_COLLS] = { 0 };

	while (getNumber == 1) {
		printf("Digite um número para posição [%hhu][%hhu]: ", row, coll);
		if ((scanf("%d", &matriz[row][coll])) != 1) {
			printf("Digite um número válido!\n");
			clearBuffer();
			continue;
		}

		coll++;
		if ((coll % 3) == 0) {
			coll = 0;
			row++;
		}
		if (row == 2) {
			getNumber = 0;
		}
	}

	printf("\nValores da matriz:\n");
	for (uint8_t l = 0; l < MATRIZ_ROWS; l++) {
		for (uint8_t c = 0; c < MATRIZ_COLLS; c++) {
			printf("%10d ", matriz[l][c]);
		}
		printf("\n");
	}

	return 0;
}