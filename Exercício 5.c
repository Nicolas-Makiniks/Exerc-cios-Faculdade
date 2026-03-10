#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	int safraColhida = 0;

	printf("Insira o valor da safra colhida: ");
	scanf("%d", &safraColhida);
	printf("\n");

	if (safraColhida <= 1000) {
		printf("Safra colhida abaixo da meta.");
	}
	else if (safraColhida <= 5000) {
		printf("Safra colhida dentro da meta.");
	}
	else {
		printf("Safra colhida acima da meta.");
	}

	printf("\n");
	system("pause");

	return 0;
}