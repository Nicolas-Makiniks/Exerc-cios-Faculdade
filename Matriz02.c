#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <locale.h>

#define ROWS 3
#define COLLS 3

/*
	02) Dada uma matriz de inteiros de ordem 3x3 faça um programa em C que:
		a) Calcule a soma dos elementos da primeira coluna
		b) Calcule o produto dos elementos da primeira linha
		c) Calcule a soma de todos os elementos da matriz
*/

uint16_t sumFirstColl(uint8_t* baseMatriz, uint8_t totalRows, uint8_t totalColls) {
	uint16_t sum = 0;

	/*
		Por a matriz em C ser um conjunto de dados contínuos em sequência como um vetor gigante,
		basta percorrer horizontalmente os elementos de forma proporcional ao seu tamanho.

		matriz:
		1 2 3
		4 5 6
		7 8 9

		sum += *(0 + (0 * 3)) = 0º posição (primeira linha, primeiro elemento)
		sum += *(0 + (1 * 3)) = 3º posição (segunda linha, primeiro elemento)
		sum += *(0 + (2 * 3)) = 6º posição (terceira linha, primeiro elemento)

		é o mesmo que:

		sum += 1
		sum += 4
		sum += 7

		sum: 12
	*/
	for (int i = 0; i < totalRows; i++) {
		sum += *(baseMatriz + (i * totalColls));
	}

	return sum;
}

uint32_t productFirstRow(uint8_t* row, uint8_t totalColls) {
	uint32_t product = 1;

	for (int i = 0; i < totalColls; i++) {
		product *= *(row + i);
	}

	return product;
}

uint16_t sumMatriz(uint8_t* baseMatriz, uint8_t totalElements) {
	uint16_t sum = 0;

	for (int i = 0; i < totalElements; i++) {
		sum += *(baseMatriz + i);
	}

	return sum;
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "pt-br");
	srand(time(NULL));

	uint8_t matriz[ROWS][COLLS] = { 0 };
	const uint8_t rows = ROWS;
	const uint8_t colls = COLLS;

	// Gerando valores aleatórios de 0 a 99 para a matriz
	printf("--- Matriz Gerada ---\n");
	for (int i = 0; i < 3; i++) {
		printf("      ");
		for (int j = 0; j < 3; j++) {
			matriz[i][j] = rand() % 100;
			printf("%2hhu ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("---------------------\n");

	printf("a) Soma dos elementos da primeira coluna: %hu\n", sumFirstColl(matriz[0], rows, colls));
	printf("b) Produto dos elementos da primeira linha: %u\n", productFirstRow(matriz[0], colls));
	printf("c) Soma de todos os elementos da matriz: %hu\n", sumMatriz(matriz[0], rows * colls));

	system("pause");

	return 0;
}