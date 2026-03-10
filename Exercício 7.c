#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define VALOR_FISCAL 70

int main() {
	setlocale(LC_ALL, "portuguese");

	float valorArrecadacao = 0, valorAlimentacao = 0, saldoFinal = 0;
	int quantidadeFiscais = 0;

	printf("Digite o valor arrecadado: ");
	scanf("%f", &valorArrecadacao);
	printf("Digite a quantidade de fiscais: ");
	scanf("%d", &quantidadeFiscais);
	printf("Digite o valor gasto com alimentação: ");
	scanf("%f", &valorAlimentacao);

	saldoFinal = valorArrecadacao - quantidadeFiscais * VALOR_FISCAL - valorAlimentacao;

	printf("\nSaldo final: R$%.2f.\n", saldoFinal);
	system("pause");

	return 0;
}