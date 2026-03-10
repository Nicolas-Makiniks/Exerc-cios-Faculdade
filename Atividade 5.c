#define _CRT_SECURE_NO_WARNINGS

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
Fazer um programa que mostre a soma entre o intervalo 1 até 10
*/

void clearScreen() {
	system("pause");
	system("cls");
}

void clearBuffer() {
	char clearBuffer;
	while ((clearBuffer = getchar()) != '\n' && clearBuffer != EOF) {}
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "portuguese");
	int soma = 0;

	for (int i = 1; i <= 10; i++) {
		soma += i;
	}

	printf("\nSoma final: %d\n", soma);

	return 0;
}