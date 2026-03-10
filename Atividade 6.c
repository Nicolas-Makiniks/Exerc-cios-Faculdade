#define _CRT_SECURE_NO_WARNINGS

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
Elaborar em linguagem C um programa que escreva na tela os valores 10, 9, 8, 7, 6, 5,
4, 3, 2, e 1
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

	for (int i = 10; i > 0; i--) {
		if (i != 1) {
			printf("%d, ", i);
		}
		else {
			printf("%d.\n", i);
		}
	}

	return 0;
}