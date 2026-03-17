#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

#define ARRAY_SIZE 10

/*
	Exercício 3 – Contagem de pares
	Leia 10 números e mostre quantos deles são pares.
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
	uint8_t even = (uint8_t)0;

	int32_t userNumber[ARRAY_SIZE] = { (int32_t)0 };

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

	printf("\nValores do vetor: ");
	for (uint8_t i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", userNumber[i]);

		if ((userNumber[i] % 2) == 0) {
			even++;
		}
	}
	printf("\nTotal números pares: %hhd\n", even);

	system("pause");

	return 0;
}