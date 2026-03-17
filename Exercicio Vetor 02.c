#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

#define ARRAY_SIZE 8

/*
	Faça um programa que leia 8 números inteiros, armazene em um vetor e mostre:
		• O maior e o menor valor digitado.
*/

void clearBuffer() {
	char clearBuffer;

	while ((clearBuffer = getchar()) != '\n' && clearBuffer != EOF);
}

void clearScreen() {
	system("pause");
	system("cls");
}

uint8_t main(int argc, char* argv[]) {
	setlocale(LC_ALL, "pt-br");

	uint8_t position = (uint8_t)0;
	uint8_t getNumber = (uint8_t)1;

	int32_t userNumber[ARRAY_SIZE] = { (int32_t)0 };
	int32_t minNumber = (int32_t)0;
	int32_t maxNumber = (int32_t)0;

	while (getNumber == (uint8_t)1) {
		printf("Insira o %hhdª número: ", position + (uint8_t)1);

		if ((scanf("%d", &userNumber[position]) != 1)) {
			printf("Insira um número válido!\n");
			clearBuffer();
			continue;
		}

		position++;

		if (position == ARRAY_SIZE) {
			getNumber = 0;
		}
	}

	minNumber = userNumber[0];
	maxNumber = userNumber[0];

	printf("\nValores do vetor: ");
	for (uint8_t i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", userNumber[i]);

		if (minNumber > userNumber[i]) {
			minNumber = userNumber[i];
		}

		if (maxNumber < userNumber[i]) {
			maxNumber = userNumber[i];
		}
	}
	printf("\n");

	printf("Menor número: %d\n", minNumber);
	printf("Maior número: %d\n", maxNumber);

	system("pause");

	return 0;
}