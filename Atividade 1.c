#define _CRT_SECURE_NO_WARNINGS

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
Efetue um algoritmo que receba um valor qualquer e imprima os valores de 0 até o
valor recebido
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
	int entradaUsuario = -1;

	do {
		printf("Insira um valor para contagem de 0 a: ");
		if (scanf("%d", &entradaUsuario) == 1) {
			printf("Contando de 0 a %d:\n", entradaUsuario);
			for (int i = 0; i <= entradaUsuario; i++) {
				printf("%d\n", i);
			}
			break;
		}

		printf("\nEntrada inválida! Insira um número.\n");
		clearBuffer();
		clearScreen();
	} while (entradaUsuario == -1);

	system("pause");

	return 0;
}