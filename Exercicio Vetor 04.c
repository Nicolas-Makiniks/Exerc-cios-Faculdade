#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

#define ARRAY_SIZE 5

/*
	Exercício 4 – Média dos elementos
	Leia 5 números, calcule e exiba a média aritmética.
*/

void clearBuffer() {
	int8_t clearBuffer;

	while ((clearBuffer = getchar()) != '\n' && clearBuffer != EOF);
}

uint8_t main(int32_t argc, int8_t* argv[]) {
	setlocale(LC_ALL, "pt-br");

	uint8_t position = (uint8_t)0;
	uint8_t getNumber = (uint8_t)1;

	int32_t userNumber[ARRAY_SIZE] = { (int32_t)0 };
	float arithmeticMean = 0;

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

	printf("Valores do vetor: ");
	for (uint8_t i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", userNumber[i]);
		arithmeticMean += userNumber[i];
	}
	arithmeticMean /= ARRAY_SIZE;
	printf("\nMédia aritmética: %.2f\n", arithmeticMean);

	system("pause");

	return 0;
}