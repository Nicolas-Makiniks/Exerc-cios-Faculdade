#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

/*
	Crie uma função chamada verificarIdade() que receba uma idade
	e informe se a pessoa é maior ou menor de idade.
*/

int8_t verificarIdade(int32_t userAge) {
	if (userAge >= 18) {
		return 1;
	}

	return 0;
}

int8_t main(int32_t argc, int8_t argv[]) {
	setlocale(LC_ALL, "pt-br");

	int32_t userAge = 20;

	if (verificarIdade(userAge) == 1) {
		printf("Usuário maior de idade.\n");
		system("pause");
		return 0;
	}

	printf("Usuário menor de idade.\n");
	system("pause");
	return 0;
}