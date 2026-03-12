#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

void printDecimalBits(uint64_t decimal) {
	if (decimal == 0) {
		printf("0\n");
		return;
	}

	uint8_t numBits = sizeof(decimal) * 8;
	uint8_t isLeft = 0;

	for (int i = numBits - 1; i >= 0; i--) {
		uint8_t bit = ((decimal >> i) & 1);

		// Percorre os bits até o primeiro 1 para remover os zeros à esquerda
		if (bit == 1) {
			isLeft = 1;
		}

		if (isLeft == 1) {
			printf("%u", bit);

			if (i % 4 == 0) {
				printf(" ");
			}
		}
	}
	printf("\n");
}

void printFormatedNumber(uint64_t decimal) {
	if (decimal < 1000) {
		printf("%llu", decimal);
		return;
	}

	printFormatedNumber(decimal / 1000);

	printf(".%03llu", decimal % 1000);
}

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "pt-br");

	uint64_t decimalNumber;

	printf("Digite um número decimal inteiro positivo: ");
	(void)scanf("%llu", &decimalNumber);

	printf("\nValor decimal: ");
	printFormatedNumber(decimalNumber);
	printf("\n");

	printf("Valor binário: ");
	printDecimalBits(decimalNumber);

	return 0;
}