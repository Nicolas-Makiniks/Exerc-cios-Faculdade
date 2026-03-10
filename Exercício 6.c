#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	float alunosMatriculados = 0, alunosFormados = 0, evasaoAlunos = 0;

	printf("Digite a quantidade de alunos matriculados: ");
	scanf("%f", &alunosMatriculados);
	printf("\n");
	printf("Digite a quantidade de alunos formados: ");
	scanf("%f", &alunosFormados);

	evasaoAlunos = (100 * (alunosMatriculados - alunosFormados)) / alunosMatriculados;
	
	printf("\n");

	if (evasaoAlunos <= 10) {
		printf("Nível baixo de evasão em %.1f%%.", evasaoAlunos);
	}
	else if (evasaoAlunos <= 15) {
		printf("Nível médio de evasão em %.1f%%.", evasaoAlunos);
	}
	else if (evasaoAlunos <= 25) {
		printf("Nível alto de evasão em %.1f%%.", evasaoAlunos);
	}
	else {
		printf("Nível muito alto de evasão em %.1f%%.", evasaoAlunos);
	}

	printf("\n");
	system("pause");

	return 0;
}