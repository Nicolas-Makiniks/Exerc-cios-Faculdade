#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "UTF8");

	printf("Olá!! Estou em português do Brasil!");

	return 0;
}