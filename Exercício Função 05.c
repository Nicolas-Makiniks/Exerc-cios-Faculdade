#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

/*
	Crie uma função chamada dobro() que receba um número e retorne o dobro desse valor.
*/

int64_t dobro(int32_t userNumber) {
	return 2 * userNumber;
}

int8_t main(int32_t argc, int8_t argv[]) {
	setlocale(LC_ALL, "pt-br");

	int32_t userNumber = 32;

	printf("O dobro de %d é: %lld.\n", userNumber, dobro(userNumber));
	system("pause");

	return 0;
}