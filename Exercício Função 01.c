#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <locale.h>

/*
	Crie uma função chamada saudacao() que mostre na tela a mensagem:
	"Bem-vindo ao estudo da linguagem C!". Depois chame essa função dentro da main().
*/

void saudacao() {
	printf("Bem-vendo ao estudo da linguagem C!\n");
}

int8_t main(int32_t argc, int8_t argv[]) {
	setlocale(LC_ALL, "pt-br");

	saudacao();
	system("pause");

	return 0;
}