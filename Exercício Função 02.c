#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

/*
	Crie uma função chamada soma() que receba dois números
	inteiros como parâmetros e mostre o resultado da soma.
*/

int32_t soma(int32_t userNumber1, int32_t userNumber2) {
	return userNumber1 + userNumber2;
}

int8_t main(int32_t argc, int8_t argv[]) {
	setlocale(LC_ALL, "pt-br");

	int32_t number1 = 40;
	int32_t number2 = 50;

	printf("Valor da soma de %d + %d = %d\n", number1, number2, soma(number1, number2));
	system("pause");

	return 0;
}