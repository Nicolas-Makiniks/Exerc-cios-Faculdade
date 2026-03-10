#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "pt-br");

	unsigned char semSinal8bits = 0ui8;
	char comSinal8bits = -128i8;

	printf("variavel:   semSinal8bits | comSinal8bits\n");
	printf("Valor:\t\t\t%hhu | %hhd\n", semSinal8bits, comSinal8bits);
	printf("size:\t\t  %llu bytes | %llu bytes\n\n", sizeof(semSinal8bits), sizeof(comSinal8bits));

	semSinal8bits += comSinal8bits;

	printf("semSinal8bits + comSinal8bits\nou seja, somando 0 + (-128)\n\n");
	printf("Resultado da soma: %hhu\n", semSinal8bits);

	system("pause");

	return 0;
}