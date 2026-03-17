#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

/*
	Crie um programa que leia 5 números inteiros e mostre:
		• Todos os números digitados;
		• A soma total dos elementos.
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

	uint8_t	position = 0U;
	uint8_t getNumber = 1U;

	int32_t userNumber[5U] = { (int32_t)0 };
	int64_t sumNumbers = (int64_t)0;

	while (getNumber == 1U) {
		printf("Insira o %hhuª número: ", position + 1U);

		if ((scanf("%d", &userNumber[position])) != 1U) {
			printf("Insira um número válido!\n");
			clearBuffer();
			continue;
		}

		position++;

		if (position == 5U) {
			getNumber = 0U;
		}
	}

	printf("\nValores do vetor: ");
	for (int i = 0U; i < 5U; i++) {
		printf("%d ", userNumber[i]);
		sumNumbers += userNumber[i];
	}
	printf("\nSoma dos valores: %lld\n", sumNumbers);

	system("pause");

	return 0;
}