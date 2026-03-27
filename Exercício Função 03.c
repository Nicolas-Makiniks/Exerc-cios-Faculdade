#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

/*
	Crie uma função chamada quadrado() que receba um
	número e mostre o quadrado desse número.
*/

int64_t quadradro(int32_t userNumber) {
	return userNumber * userNumber;
}

int8_t main(int32_t argc, int8_t argv[]) {
	setlocale(LC_ALL, "pt-br");

	int32_t number = 8;

	printf("O quadrado de %d é %lld.\n", number, quadradro(number));
	system("pause");

	return 0;
}